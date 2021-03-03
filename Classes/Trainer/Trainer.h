//
// Created by antoi on 25/01/2021.
//

#include <iostream>
#include "../Pokemon/Pokemon.h"
#include "../Item/Item.h"
#include <vector>

#ifndef POKEMONCPP_TRAINER_H
#define POKEMONCPP_TRAINER_H


class Trainer {

private:
    int id;
    std::string  name;
    std::vector<Pokemon> teams;
    std::vector<Pokemon> pc;
    int money;
    std::vector<Item> inventory;

public:

    Trainer(int id, const std::string &name, const std::vector<Pokemon> &teams, const std::vector<Pokemon> &pc,
            int money, const std::vector<Item> &inventory);

    Trainer();

    int getId() const;

    void setId(int id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::vector<Pokemon> &getTeams() const;

    void setTeams(const std::vector<Pokemon> &teams);

    const std::vector<Pokemon> &getPc() const;

    void setPc(const std::vector<Pokemon> &pc);

    int getMoney() const;

    void setMoney(int money);

    const std::vector<Item> &getInventory() const;

    void setInventory(const std::vector<Item> &inventory);

    Pokemon searchWildPokemon();



};


#endif //POKEMONCPP_TRAINER_H
