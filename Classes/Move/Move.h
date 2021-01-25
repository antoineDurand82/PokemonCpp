//
// Created by notitou on 25/01/2021.
//

#ifndef POKEMONCPP_MOVE_H
#define POKEMONCPP_MOVE_H
#include <iostream>


class Move {
private:
    std::string name;
    PokemonType type;
    int power;
    int accuracy;
    int powerPoints;
};


#endif //POKEMONCPP_MOVE_H
