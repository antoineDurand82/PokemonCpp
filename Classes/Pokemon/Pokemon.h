//
// Created by antoi on 25/01/2021.
//
#include <iostream>
#include "../Move/Move.h"
#include "../Item/Item.h"
#include <vector>

#ifndef POKEMONCPP_POKEMON_H
#define POKEMONCPP_POKEMON_H


class Pokemon {

private:
    int id;
    std::string  pokemonName;
    std::string name;
    int hp;
    std::vector<Move> moves;
    std::vector<Item> inventory;

};


#endif //POKEMONCPP_POKEMON_H
