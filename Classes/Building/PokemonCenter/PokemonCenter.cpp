//
// Created by notitou on 16/02/2021.
//

#include "PokemonCenter.h"
#include "../../Trainer/Trainer.h"
#include <iostream>
using namespace std;

PokemonCenter::PokemonCenter(int id, const string &name) : Building(id, name) {}

void PokemonCenter::healPokemons(Trainer *trainer) {
    for(unsigned i=0; i < trainer->teams.size(); ++i){
        cout << trainer->teams[i].getName() << endl;
        trainer->teams[i].setCurrentHp(trainer->teams[i].getMaxHp());
        for(unsigned j=0; j < trainer->teams[i].moves.size(); ++j){
            trainer->teams[i].moves[j].setPowerPoints(trainer->teams[i].moves[j].getMaxPowerPoints());
        }
    }
    cout << "Tous vos pok\202mons ont \202t\202 soign\202 !" << endl;
}


void PokemonCenter::goToPC(Trainer *trainer) {
    unsigned short actionChoosed;
    // chooseAction: demande \205 l'utilisateur quelle action il souhaite faire
    cout << "Que souhaitez vous faire ?" << endl;
    cout << "Vous avez le choix entre 2 actions diff\202rents: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. D\202poser des pok\202mons dans le PC" << endl;
    cout << "2. Prendre un pok\202mon du PC" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pour s\202lectionner l'une des actions vous avez juste \205 entrer le chiffre correspondant :" << endl;
    cin >> actionChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (actionChoosed) {
        case 1:
            depositPokemon(trainer);
            break;
        case 2:
            withdrawPokemon(trainer);
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s";
            return goToPC(trainer);
    }
    return;
}

void PokemonCenter::withdrawPokemon(Trainer *trainer){
    if(trainer->teams.size() == 6){
        cout << "Votre team est au complet." << endl;
        return;
    }else{
        unsigned short actionChoosed;
        cout << "Voici les pok\202mons de votre PC." << endl;
        cout << "----------------------------------------------" << endl;
        for (unsigned int i = 0; i < trainer->pc.size(); ++i) {
            cout << i + 1 << ". " << trainer->pc[i].getName() << endl;
        }
        cout << "Pour retirer le pok\202mon correspondant entrez le chiffre correspondant :" << endl;
        cin >> actionChoosed;
        cin.clear();
        cin.ignore(1000, '\n');
        trainer->teams.push_back(trainer->pc[actionChoosed - 1]);
        trainer->pc.erase(trainer->pc.begin() + (actionChoosed - 1));
        }
};

void PokemonCenter::depositPokemon(Trainer *trainer){
    if(trainer->teams.size() == 1){
        cout << "Vous devez au moins avoir 1 pok\202mon dans votre team." << endl;
        return;
    }else{
        unsigned short actionChoosed;
        cout << "Voici les pok\202mons de votre team." << endl;
        cout << "----------------------------------------------" << endl;
        for (unsigned int i = 0; i < trainer->teams.size(); ++i) {
            cout << i + 1 << ". " << trainer->teams[i].getName() << endl;
        }
        cout << "Pour d\202poser le pok\202mon correspondant, entrez le chiffre correspondant :" << endl;
        cin >> actionChoosed;
        cin.clear();
        cin.ignore(1000, '\n');
        trainer->pc.push_back(trainer->teams[actionChoosed - 1]);
        trainer->teams.erase(trainer->teams.begin() + (actionChoosed - 1));
    }
}
