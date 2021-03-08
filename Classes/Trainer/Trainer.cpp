//
// Created by antoi on 25/01/2021.
//

#include "Trainer.h"
#include "../EnumLocation/Location.h"
#include <iostream>
#include <stdlib.h>
#include "../../data/Init/Init.h"

using namespace std;

Trainer::Trainer(int id, const string &name, const vector<Pokemon> &teams, const vector<Pokemon> &pc,
                 int money, const vector<HealItem> &healInventory, const vector<BallItem> &ballInventory) : id(id), name(name), teams(teams), pc(pc),
                                                                  money(money), healInventory(healInventory), ballInventory(ballInventory) {}

int Trainer::getId() const {
    return id;
}

void Trainer::setId(int id) {
    Trainer::id = id;
}

const string &Trainer::getName() const {
    return name;
}

void Trainer::setName(const string &name) {
    Trainer::name = name;
}

const vector<Pokemon> &Trainer::getTeams() const {
    return teams;
}

void Trainer::getTeamsToString(){
    for (int i = 0; i < this->getTeams().size(); ++i) {
        cout << i + 1 << ". " << teams[i].getName() << "       " << teams[i].hpleftOnHpmax() << " hp" << endl;
    }
    return;
}

void Trainer::setTeams(const vector<Pokemon> &teams) {
    Trainer::teams = teams;
}

const vector<Pokemon> &Trainer::getPc() const {
    return pc;
}

void Trainer::setPc(const vector<Pokemon> &pc) {
    Trainer::pc = pc;
}

int Trainer::getMoney() const {
    return money;
}

void Trainer::setMoney(int money) {
    Trainer::money = money;
}

const vector<HealItem> &Trainer::getHealInventory() const {
    return healInventory;
}

void Trainer::setHealInventory(const vector<HealItem> &healInventory) {
    Trainer::healInventory = healInventory;
}

const vector<BallItem> &Trainer::getBallInventory() const {
    return ballInventory;
}

void Trainer::setBallInventory(const vector<BallItem> &ballInventory) {
    Trainer::ballInventory = ballInventory;
}

void Trainer::listHealInventory(){
    for (int i = 0; i < healInventory.size(); ++i) {
        cout << i + 1 << ". " << healInventory[i].getName() << endl;
    }
    return;
}

void Trainer::listBallInventory(){
    for (int i = 0; i < ballInventory.size(); ++i) {
        cout << i + 1 << ". " << ballInventory[i].getName() << endl;
    }
    return;
}

void Trainer::searchWildPokemon() {
    unsigned short biomeChoosed;
    // searchWildPokemon: demande le lieu puis sort un pokemon al\202atoire d'une liste suivant le lieu (plaine, grotte, oc\202an, ciel)
    cout << "Vous avez le choix entre 7 biomes diff\202rents: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. La plaine" << endl;
    cout << "2. La montagne" << endl;
    cout << "3. La grotte" << endl;
    cout << "4. L'oc\202an" << endl;
    cout << "5. Le ciel" << endl;
    cout << "6. La for\210t" << endl;
    cout << "7. Le marais" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pour s\202lectionner l'un de ces biomes vous avez juste \205 entrer le chiffre correspondant :" << endl;
    cin >> biomeChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    Location choice; // création location vide
    switch (biomeChoosed) {
        case 1:
            choice = Plaine;
            break;
        case 2:
            choice = Montagne;
            break;
        case 3:
            choice = Grotte;
            break;
        case 4:
            choice = Ocean;
            break;
        case 5:
            choice = Ciel;
            break;
        case 6:
            choice = Foret;
            break;
        case 7:
            choice = Marais;
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s";
            return searchWildPokemon();
    }
    for (int i = 0; i < teams.size(); ++i) {
        teams[i].setIsCaptured(true);
    }
    vector<Pokemon> listPokemon = choice.getListPokemon();
    Pokemon wildPokemon = listPokemon[rand() % listPokemon.size()];
    battle(&wildPokemon);
    return;
}

void
Trainer::chooseAction(Pokemon *pokemonChoosed, Pokemon *wildPokemon, bool *endBattle, const vector<Move> *pokemonMoves) {
    unsigned short actionChoosed;
    // chooseAction: demande à l'utilisateur quelle action il souhaite faire
    cout << "\nQue souhaitez vous faire ?" << endl;
    cout << "Vous avez le choix entre 4 actions diff\202rentes: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. Choisir une attaque" << endl;
    cout << "2. Prend un item dans le sac" << endl;
    cout << "3. Changer de Pokemon" << endl;
    cout << "4. Fuir" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pour s\202lectionner l'une des actions vous avez juste \205 entrer le chiffre correspondant :" << endl;
    cin >> actionChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (actionChoosed) {
        case 1:
            chooseAttack(pokemonChoosed, wildPokemon, pokemonMoves);
            break;
        case 2:
            useItem(pokemonChoosed, wildPokemon, endBattle);
            break;
        case 3:
            changePokemon(pokemonChoosed);
            break;
        case 4:
            runAway(endBattle);
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
            return chooseAction(pokemonChoosed, wildPokemon, endBattle, pokemonMoves);
    }
    return;

}

void Trainer::battle(Pokemon *wildPokemon){
    unsigned short nbPokemonDied {0};
    cout << "\nUn " << wildPokemon->getName() << " sauvage est apparu !" << endl;
    cout << "Il poss\212de " << wildPokemon->hpleftOnHpmax() << " hp" << endl;
    Pokemon pokemonChoosed = teams[0];
    vector<Move> moves = pokemonChoosed.getMoves();
    bool endBattle = false;
    while (!endBattle){
        chooseAction(&pokemonChoosed, wildPokemon, &endBattle, &moves);
        if(!endBattle){
            if(!wildPokemon->checkAlived()){
                cout << wildPokemon->getName() << " a maintenant 0 hp" << endl;
                cout << "Votre " << pokemonChoosed.getName() << " a battu " << wildPokemon->getName() << endl;
                setMoney(getMoney() + 500);
                cout << "Vous avez trouv\202 500 pok\202dollars sur la victime." << endl;
                endBattle = true;
            } else if (wildPokemon->checkAlived()){
                cout << wildPokemon->getName() << " a maintenant " << wildPokemon->hpleftOnHpmax() << " hp" << endl;
                int damageTaken = wildPokemon->randomAttack();
                pokemonChoosed.setCurrentHp(pokemonChoosed.getCurrentHp() - damageTaken);
                if(!pokemonChoosed.checkAlived()){
                    cout << pokemonChoosed.getName() << " a maintenant 0 hp" << endl;
                    cout << "Votre " << pokemonChoosed.getName() << " a \202t\202 battu par " << wildPokemon->getName() << endl;
                    for (int i = 0; i < this->getTeams().size() - 1; ++i) {
                        if(this->getTeams()[i].getCurrentHp() <= 0){
                            nbPokemonDied += 1;
                        }
                    }
                    if(nbPokemonDied == this->getTeams().size()){
                        cout << "Tout les pokemon de ton \202quipe n'ont plus d'hp, tu ne peux plus combatre." << endl;
                        endBattle = true;
                    } else{
                        cout << "Tu dois changer de pokemon pour continuer" << endl;
                        changePokemon(&pokemonChoosed);
                    }
                }
                cout << pokemonChoosed.getName() << " a maintenant " << pokemonChoosed.hpleftOnHpmax() << " hp" << endl;
            }
        }
    }
    return;
}

void Trainer::runAway(bool *endBattle) {
    *endBattle = true;
    return;
}

void Trainer::useItem(Pokemon *pokemonChoosed, Pokemon *wildPokemon, bool *endBattle){
    unsigned short inventoryChoosed;
    unsigned short pokeballChoosed;
    unsigned short potionChoosed;
    cout << "\nQuel type d'item souhaitez-vous utiliser ?" << endl;
    cout << "1. Pokeball" << endl;
    cout << "2. Potion" << endl;
    cin >> inventoryChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (inventoryChoosed) {
        case 1:
            cout << "\nQuel pokeball souhaitez-vous utiliser ?" << endl;
            listBallInventory();
            cin >> pokeballChoosed;
            cin.clear();
            cin.ignore(1000, '\n');
            if(this->ballInventory.size() == 0){
                cout << "Vous n'avez pas de pokeball, vous passez votre tour.";
                return;
            } else if(pokeballChoosed > this->ballInventory.size() || pokeballChoosed < 0){
                cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
                return useItem(pokemonChoosed, wildPokemon, endBattle);
            } else {
                this->ballInventory[pokeballChoosed - 1].catching(wildPokemon, endBattle);
                this->ballInventory.erase(this->ballInventory.begin() + (pokeballChoosed - 1));
                if(this->teams.size() < 6){
                    this->teams.push_back(*wildPokemon);
                } else {
                    this->pc.push_back(*wildPokemon);
                }
            }
            break;
        case 2:
            cout << "\nQuel potion souhaitez-vous utiliser ?" << endl;
            listHealInventory();
            cin >> potionChoosed;
            cin.clear();
            cin.ignore(1000, '\n');
            if(this->healInventory.size() == 0){
                cout << "Vous n'avez pas de potion, vous passez votre tour.";
                return;
            } else if(potionChoosed > this->healInventory.size() || potionChoosed < 0){
                cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
                return useItem(pokemonChoosed, wildPokemon, endBattle);
            } else {
                this->healInventory[potionChoosed - 1].heal(pokemonChoosed, &this->healInventory, &potionChoosed);
            }
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
            return useItem(pokemonChoosed, wildPokemon, endBattle);

    }
    return;
}

void Trainer::changePokemon(Pokemon *pokemonChoosed) {
    unsigned short pokemonSwitched;
    // chooseAction: demande à l'utilisateur quel pokemon envoyer au combat
    cout << "\nQuel pok\202mon souhaitez-vous envoyer au combat ?" << endl;
    cout << "----------------------------------------------" << endl;
    this->getTeamsToString();
    cout << "----------------------------------------------" << endl;
    cout << "Pour s\202lectionner l'un des pok\202mon vous avez juste \205 entrer le chiffre correspondant :" << endl;
    cin >> pokemonSwitched;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (pokemonSwitched) {
        case 1:
            if(this->getTeams()[pokemonSwitched - 1].getName() == pokemonChoosed->getName()){
                cout << "Ce pokemon est d\202j\205 au combat, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }else if(this->getTeams()[pokemonSwitched - 1].getCurrentHp() <= 0){
                cout << "Ce pokemon n'est plus en mesure de combatre, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }
            *pokemonChoosed = this->getTeams()[pokemonSwitched - 1];
            break;
        case 2:
            if(this->getTeams()[pokemonSwitched - 1].getName() == pokemonChoosed->getName()){
                cout << "Ce pokemon est d\202j\205 au combat, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }else if(this->getTeams()[pokemonSwitched - 1].getCurrentHp() <= 0){
                cout << "Ce pokemon n'est plus en mesure de combatre, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }
            *pokemonChoosed = this->getTeams()[pokemonSwitched - 1];
            break;
        case 3:
            if(this->getTeams()[pokemonSwitched - 1].getName() == pokemonChoosed->getName()){
                cout << "Ce pokemon est d\202j\205 au combat, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }else if(this->getTeams()[pokemonSwitched - 1].getCurrentHp() <= 0){
                cout << "Ce pokemon n'est plus en mesure de combatre, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }
            *pokemonChoosed = this->getTeams()[pokemonSwitched - 1];
            break;
        case 4:
            if(this->getTeams()[pokemonSwitched - 1].getName() == pokemonChoosed->getName()){
                cout << "Ce pokemon est d\202j\205 au combat, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }else if(this->getTeams()[pokemonSwitched - 1].getCurrentHp() <= 0){
                cout << "Ce pokemon n'est plus en mesure de combatre, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }
            *pokemonChoosed = this->getTeams()[pokemonSwitched - 1];
            break;
        case 5:
            if(this->getTeams()[pokemonSwitched - 1].getName() == pokemonChoosed->getName()){
                cout << "Ce pokemon est d\202j\205 au combat, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }else if(this->getTeams()[pokemonSwitched - 1].getCurrentHp() <= 0){
                cout << "Ce pokemon n'est plus en mesure de combatre, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }
            *pokemonChoosed = this->getTeams()[pokemonSwitched - 1];
            break;
        case 6:
            if(this->getTeams()[pokemonSwitched - 1].getName() == pokemonChoosed->getName()){
                cout << "Ce pokemon est d\202j\205 au combat, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            } else if(this->getTeams()[pokemonSwitched - 1].getCurrentHp() <= 0){
                cout << "Ce pokemon n'est plus en mesure de combatre, tu ne peux pas le s\202lectionner" << endl;
                return changePokemon(pokemonChoosed);
            }
            *pokemonChoosed = this->getTeams()[pokemonSwitched - 1];
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
            return changePokemon(pokemonChoosed);
    }
    return;

}

void Trainer::chooseAttack(Pokemon *pokemonChoosed, Pokemon *wildPokemon, const vector<Move> *pokemonMoves) {
    unsigned short attackChoosed;
    cout << "\nQuelle attaque " << pokemonChoosed->getName() << " doit faire ?" << endl;
    cout << "----------------------------------------------" << endl;
    pokemonChoosed->showMoves();
    cout << "----------------------------------------------" << endl;
    cout << "Pour s\202lectionner l'une des attaques vous avez juste \205 entrer le chiffre correspondant :" << endl;
    cin >> attackChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    int currentHpWildPokemon = wildPokemon->getCurrentHp();
    int damageMade = 0;
    Move *move = &pokemonChoosed->moves[0];
    switch (attackChoosed) {
        case 1:
            move = &pokemonChoosed->moves[0];
            if(pokemonChoosed->canUseTM(move)){
                damageMade = pokemonChoosed->useTM(move);
                wildPokemon->setCurrentHp(currentHpWildPokemon - damageMade);
                cout << "En s\202lectionnant " << pokemonChoosed->getMoves()[0].getName() << " vous avez fait "
                     << damageMade << " de d\202gat \205 " << wildPokemon->getName() << " !" << endl;

            } else {
                cout << "La capacit\202 n'a plus de PP" << endl;
                return chooseAttack(pokemonChoosed, wildPokemon, pokemonMoves);
            }

            break;
        case 2:
            move = &pokemonChoosed->moves[1];
            if(pokemonChoosed->canUseTM(move)) {
                damageMade = pokemonChoosed->useTM(move);
                wildPokemon->setCurrentHp(currentHpWildPokemon - damageMade);
                cout << "En s\202lectionnant " << pokemonChoosed->getMoves()[1].getName() << " vous avez fait "
                     << damageMade << " de d\202gat \205 " << wildPokemon->getName() << " !" << endl;
            } else {
                cout << "La capacit\202 n'a plus de PP" << endl;
                return chooseAttack(pokemonChoosed, wildPokemon, pokemonMoves);
            }
            break;
        case 3:
            move = &pokemonChoosed->moves[2];
            if(pokemonChoosed->canUseTM(move)) {
                damageMade = pokemonChoosed->useTM(move);
                wildPokemon->setCurrentHp(currentHpWildPokemon - damageMade);
                cout << "En s\202lectionnant " << pokemonChoosed->getMoves()[2].getName() << " vous avez fait "
                     << damageMade << " de d\202gat \205 " << wildPokemon->getName() << " !" << endl;
            } else {
                cout << "La capacit\202 n'a plus de PP" << endl;
                return chooseAttack(pokemonChoosed, wildPokemon, pokemonMoves);
            }
            break;
        case 4:
            move = &pokemonChoosed->moves[3];
            if(pokemonChoosed->canUseTM(move)) {
                damageMade = pokemonChoosed->useTM(move);
                wildPokemon->setCurrentHp(currentHpWildPokemon - damageMade);
                cout << "En s\202lectionnant " << pokemonChoosed->getMoves()[3].getName() << " vous avez fait "
                     << damageMade << " de d\202gat \205 " << wildPokemon->getName() << " !" << endl;
            } else {
                cout << "La capacit\202 n'a plus de PP" << endl;
                return chooseAttack(pokemonChoosed, wildPokemon, pokemonMoves);
            }
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
            return chooseAttack(pokemonChoosed, wildPokemon, pokemonMoves);
    }
    return;

}