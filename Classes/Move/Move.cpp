//
// Created by notitou on 25/01/2021.
//

#include "Move.h"

Move::Move(const std::string &name, const PokemonType &type, int power, int accuracy, int powerPoints) : name(name),
                                                                                                         type(type),
                                                                                                         power(power),
                                                                                                         accuracy(
                                                                                                                 accuracy),
                                                                                                         powerPoints(
                                                                                                                 powerPoints) {}

const std::string &Move::getName() const {
    return name;
}

void Move::setName(const std::string &name) {
    Move::name = name;
}

const PokemonType &Move::getType() const {
    return type;
}

void Move::setType(const PokemonType &type) {
    Move::type = type;
}

int Move::getPower() const {
    return power;
}

void Move::setPower(int power) {
    Move::power = power;
}

int Move::getAccuracy() const {
    return accuracy;
}

void Move::setAccuracy(int accuracy) {
    Move::accuracy = accuracy;
}

int Move::getPowerPoints() const {
    return powerPoints;
}

void Move::setPowerPoints(int powerPoints) {
    Move::powerPoints = powerPoints;
}

