//
// Created by antoi on 25/01/2021.
//

#include "Trainer.h"
#include <iostream>
using namespace std;

Trainer::Trainer(int id, const std::string &name, const std::vector<Pokemon> &teams, const std::vector<Pokemon> &pc,
                 int money, const std::vector<Item> &inventory) : id(id), name(name), teams(teams), pc(pc),
                                                                  money(money), inventory(inventory) {}

int Trainer::getId() const {
    return id;
}

void Trainer::setId(int id) {
    Trainer::id = id;
}

const std::string &Trainer::getName() const {
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
    int biomeChoiced;
    // searchWildPokemon: demande le lieu puis sort un pokemon aléatoire d'une liste suivant le lieu (plaine, grotte, océan, ciel)
    cout << "Vous avez le choix entre 5 biomes différents: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. La plaine" << endl;
    cout << "2. La montagne" << endl;
    cout << "3. La grotte" << endl;
    cout << "4. L'océan" << endl;
    cout << "5. Le ciel" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pour sélectionner l'un de ces biomes vous avez juste à entrer le chiffre correspondant :" << endl;
    cin >> biomeChoiced;

    return Pokemon();
}
