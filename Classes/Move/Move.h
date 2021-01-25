//
// Created by antoi on 25/01/2021.
//
#include <iostream>
#include "../PokemonType/PokemonType.h"

#ifndef POKEMONCPP_TM_H
#define POKEMONCPP_TM_H


class Move {

private:
    std::string name;
    PokemonType type;
    int power;
    int accuracy;
    int powerPoints;

};


#endif //POKEMONCPP_TM_H
