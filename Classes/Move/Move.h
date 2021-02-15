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

    const std::string &getName() const;

    void setName(const std::string &name);

    const PokemonType &getType() const;

    void setType(const PokemonType &type);

    int getPower() const;

    void setPower(int power);

    int getAccuracy() const;

    void setAccuracy(int accuracy);

    int getPowerPoints() const;

    void setPowerPoints(int powerPoints);

    int getMaxPowerPoints() const;

    void setMaxPowerPoints(int maxPowerPoints);
};


#endif //POKEMONCPP_MOVE_H
