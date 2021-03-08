//
// Created by notitou on 25/01/2021.
//

#include "Move.h"

using namespace std;

Move::Move(const string &name, const PokemonType &type, int power, int accuracy, int powerPoints,
           int maxPowerPoints) : name(name), type(type), power(power), accuracy(accuracy), powerPoints(powerPoints),
                                 maxPowerPoints(maxPowerPoints) {}

Move::Move() {}

const string &Move::getName() const {
    return name;
}

int Move::getPower() const {
    return power;
}

int Move::getPowerPoints() const {
    return powerPoints;
}

void Move::setPowerPoints(int powerPoints) {
    Move::powerPoints = powerPoints;
}

int Move::getMaxPowerPoints() const {
    return maxPowerPoints;
}
