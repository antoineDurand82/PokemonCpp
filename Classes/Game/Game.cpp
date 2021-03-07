//
// Created by antoi on 06/03/2021.
//

#include "Game.h"
#include "../Trainer/Trainer.h"
#include "../Building/PokemonCenter/PokemonCenter.h"
#include <iostream>

using namespace std;

Game::Game(const Trainer &trainer, const PokemonCenter &pokeCenter) : trainer(trainer), pokeCenter(pokeCenter) {}

void Game::play(){
    for (int i = 0; i < this->trainer.teams.size(); ++i) {
        this->trainer.teams[i].setIsCaptured(true);
    }
    for (int i = 0; i < this->trainer.pc.size(); ++i) {
        this->trainer.pc[i].setIsCaptured(true);
    }
    bool endGame = false;
    cout << "Bonjour, vous venez de d\202marer une partie de pokemon en CPP" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "\n" << endl;
    while (!endGame){
        unsigned short actionChoosed;
        cout << "Que souhaitez vous faire ?" << endl;
        cout << "Vous avez le choix entre 3 actions diff\202rentes: " << endl;
        cout << "----------------------------------------------" << endl;
        cout << "1. Aller combattre un pokemon sauvage" << endl;
        cout << "2. Aller au pokemon Center" << endl;
        cout << "3. Quitter le jeu" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Pour s\202lectionner l'une des actions vous avez juste \205 entrer le chiffre correspondant :" << endl;
        cin >> actionChoosed;
        cin.clear();
        cin.ignore(1000, '\n');
        switch (actionChoosed) {
            case 1:
                this->trainer.searchWildPokemon();
                break;
            case 2:
                usePc();
                break;
            case 3:
                cout << "Vous avez d\202cid\202 de quitter le jeu, aurevoir !" << endl;
                endGame = true;
                break;
            default:
                cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
                return play();

        }
    }
}

void Game::usePc() {
    unsigned short actionChoosed;
    cout << "Que souhaitez vous faire au pokeCenter?" << endl;
    cout << "Vous avez le choix entre 2 actions diff\202rentes: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. Aller au pc" << endl;
    cout << "2. Soigner vos pokemon" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pour s\202lectionner l'une des actions vous avez juste \205 entrer le chiffre correspondant :" << endl;
    cin >> actionChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (actionChoosed) {
        case 1:
            this->pokeCenter.goToPC(&this->trainer);
            break;
        case 2:
            this->pokeCenter.healPokemons(&this->trainer);
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
            return usePc();
    }
}


