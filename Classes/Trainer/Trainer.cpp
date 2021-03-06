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

Pokemon Trainer::searchWildPokemon() {
    unsigned short biomeChoiced;
    // searchWildPokemon: demande le lieu puis sort un pokemon al\202atoire d'une liste suivant le lieu (plaine, grotte, oc\202an, ciel)
    cout << "Vous avez le choix entre 5 biomes diff\202rents: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. La plaine" << endl;
    cout << "2. La montagne" << endl;
    cout << "3. La grotte" << endl;
    cout << "4. L'oc\202an" << endl;
    cout << "5. Le ciel" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pour s\202lectionner l'un de ces biomes vous avez juste \205 entrer le chiffre correspondant :" << endl;
    cin >> biomeChoiced;
    cin.clear();
    cin.ignore(1000, '\n');
    Location choice; // cr\202ation location vide
    switch (biomeChoiced) {
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
    return listPokemon[rand() % listPokemon.size()];
}
