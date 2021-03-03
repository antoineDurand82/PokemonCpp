//
// Created by antoi on 25/01/2021.
//

#include "Trainer.h"
#include "../EnumLocation/Location.h"
#include <iostream>
#include <stdlib.h>
#include "../../data/Init/Init.h"

using namespace std;

Trainer::Trainer(int id, const std::string &name, const std::vector<Pokemon> &teams, const std::vector<Pokemon> &pc,
                 int money, const std::vector<Item> &inventory) : id(id), name(name), teams(teams), pc(pc),
                                                                  money(money), inventory(inventory) {}

Trainer::Trainer() {}

int Trainer::getId() const {
    return id;
}

void Trainer::setId(int id) {
    Trainer::id = id;
}

const string &Trainer::getName() const {
    return name;
}

void Trainer::setName(const std::string &name) {
    Trainer::name = name;
}

const std::vector<Pokemon> &Trainer::getTeams() const {
    return teams;
}

void Trainer::setTeams(const std::vector<Pokemon> &teams) {
    Trainer::teams = teams;
}

const std::vector<Pokemon> &Trainer::getPc() const {
    return pc;
}

void Trainer::setPc(const std::vector<Pokemon> &pc) {
    Trainer::pc = pc;
}

int Trainer::getMoney() const {
    return money;
}

void Trainer::setMoney(int money) {
    Trainer::money = money;
}

const std::vector<Item> &Trainer::getInventory() const {
    return inventory;
}

void Trainer::setInventory(const std::vector<Item> &inventory) {
    Trainer::inventory = inventory;
}

void Trainer::searchWildPokemon() {
    unsigned short biomeChoosed;
    // searchWildPokemon: demande le lieu puis sort un pokemon aléatoire d'une liste suivant le lieu (plaine, grotte, océan, ciel)
    cout << "Vous avez le choix entre 5 biomes différents: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. La plaine" << endl;
    cout << "2. La montagne" << endl;
    cout << "3. La grotte" << endl;
    cout << "4. L'oc\202an" << endl;
    cout << "5. Le ciel" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pour sélectionner l'un de ces biomes vous avez juste à entrer le chiffre correspondant :" << endl;
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
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s";
            return searchWildPokemon();
    }
    vector<Pokemon> listPokemon = choice.getListPokemon();
    Pokemon wildPokemon = listPokemon[rand() % listPokemon.size()];
    battle(&wildPokemon);
    return;
}

void Trainer::chooseAction(Pokemon *pokemonChoosed, Pokemon *wildPokemon){
    unsigned short actionChoosed;
    // chooseAction: demande à l'utilisateur quelle action il souhaite faire
    cout << "Que souhaitez vous faire ?" << endl;
    cout << "Vous avez le choix entre 4 actions différents: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. Choisir une attaque" << endl;
    cout << "2. Prend un item dans le sac" << endl;
    cout << "3. Changer de Pokemon" << endl;
    cout << "4. Fuire" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pour sélectionner l'une des actions vous avez juste à entrer le chiffre correspondant :" << endl;
    cin >> actionChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (actionChoosed) {
        case 1:
            chooseAttack(pokemonChoosed, wildPokemon);
            break;
        case 2:
            useItem();
            break;
        case 3:
            changePokemon();
            break;
        case 4:
            runAway();
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux proposés";
            return chooseAction(pokemonChoosed, wildPokemon);
    }
    return;

}

void Trainer::battle(Pokemon *wildPokemon){
    cout << "Un " << wildPokemon->getName() << " sauvage est apparu !" << endl;
    cout << "Il possède " << wildPokemon->hpleftOnHpmax() << " hp" << endl;
    Pokemon pokemonChoosed = this->getTeams()[0];
    chooseAction(&pokemonChoosed, wildPokemon);
    return;
}

void Trainer::runAway() {

}

void Trainer::useItem(){

}

void Trainer::changePokemon(){

}

void Trainer::chooseAttack(Pokemon *pokemonChoosed, Pokemon *wildPokemon){
    unsigned short attackChoosed;
    cout << "Quelle attaque " << pokemonChoosed->getName() << " doit faire ?" << endl;
    cout << "----------------------------------------------" << endl;
    pokemonChoosed->showMoves();
    cout << "----------------------------------------------" << endl;
    cout << "Pour sélectionner l'une des attaques vous avez juste à entrer le chiffre correspondant :" << endl;
    cin >> attackChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    int currentHpWildPokemon = wildPokemon->getCurrentHp();
    int damageMade = 0;
    switch (attackChoosed) {
        case 1:
            damageMade = pokemonChoosed->useTM(pokemonChoosed->getMoves()[0]);
            wildPokemon->setCurrentHp(currentHpWildPokemon - damageMade);
            cout << "En sélectionnant " << pokemonChoosed->getMoves()[0].getName() << " vous avez fait " << damageMade << " de dégat à " << wildPokemon->getName() << " !" << endl;
            cout << "Il lui reste " << wildPokemon->hpleftOnHpmax() << " hp";
            break;
        case 2:
            damageMade = pokemonChoosed->useTM(pokemonChoosed->getMoves()[1]);
            wildPokemon->setCurrentHp(currentHpWildPokemon - damageMade);
            cout << "En sélectionnant " << pokemonChoosed->getMoves()[1].getName() << " vous avez fait " << damageMade << " de dégat à " << wildPokemon->getName() << " !" << endl;
            cout << "Il lui reste " << wildPokemon->hpleftOnHpmax() << " hp";
            break;
        case 3:
            damageMade = pokemonChoosed->useTM(pokemonChoosed->getMoves()[2]);
            wildPokemon->setCurrentHp(currentHpWildPokemon - damageMade);
            cout << "En sélectionnant " << pokemonChoosed->getMoves()[2].getName() << " vous avez fait " << damageMade << " de dégat à " << wildPokemon->getName() << " !" << endl;
            cout << "Il lui reste " << wildPokemon->hpleftOnHpmax() << " hp";
            break;
        case 4:
            damageMade = pokemonChoosed->useTM(pokemonChoosed->getMoves()[3]);
            wildPokemon->setCurrentHp(currentHpWildPokemon - damageMade);
            cout << "En sélectionnant " << pokemonChoosed->getMoves()[3].getName() << " vous avez fait " << damageMade << " de dégat à " << wildPokemon->getName() << " !" << endl;
            cout << "Il lui reste " << wildPokemon->hpleftOnHpmax() << " hp";
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux proposés";
            return chooseAttack(pokemonChoosed, wildPokemon);
    }
    return;

}



// faire un while je sais pas encore où pour automatisé le combat