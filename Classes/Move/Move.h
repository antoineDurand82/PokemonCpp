//
// Created by notitou on 25/01/2021.
//

#ifndef POKEMONCPP_MOVE_H
#define POKEMONCPP_MOVE_H
#include <iostream>
#include "../PokemonType/PokemonType.h"


class Move {
private:
    std::string name;
    PokemonType type;
    int power;
    int accuracy;
    int powerPoints;
    int maxPowerPoints;
public:

    Move(const std::string &name, const PokemonType &type, int power, int accuracy, int powerPoints,
         int maxPowerPoints);

    Move();

    const std::string &getName() const;

    int getPower() const;

    int getPowerPoints() const;

    void setPowerPoints(int powerPoints);

    int getMaxPowerPoints() const;
};


#endif //POKEMONCPP_MOVE_H
