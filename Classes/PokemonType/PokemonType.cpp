//
// Created by notitou on 25/01/2021.
//

#include "PokemonType.h"

PokemonType::PokemonType(const std::string &name, const std::vector<std::string> &weakAgainst,
                         const std::vector<std::string> &strongAgainst,
                         const std::vector<std::string> &notEffectiveAgainst, const std::vector<std::string> &weakTo,
                         const std::vector<std::string> &resistTo, const std::vector<std::string> &immuneTo) : name(
        name), weakAgainst(weakAgainst), strongAgainst(strongAgainst), notEffectiveAgainst(notEffectiveAgainst),
                                                                                                               weakTo(weakTo),
                                                                                                               resistTo(
                                                                                                                       resistTo),
                                                                                                               immuneTo(
                                                                                                                       immuneTo) {}

PokemonType::PokemonType() {}

const std::string &PokemonType::getName() const {
    return name;
}

const std::vector<std::string> &PokemonType::getWeakAgainst() const {
    return weakAgainst;
}

const std::vector<std::string> &PokemonType::getStrongAgainst() const {
    return strongAgainst;
}

const std::vector<std::string> &PokemonType::getNotEffectiveAgainst() const {
    return notEffectiveAgainst;
}

const std::vector<std::string> &PokemonType::getWeakTo() const {
    return weakTo;
}

const std::vector<std::string> &PokemonType::getResistTo() const {
    return resistTo;
}

const std::vector<std::string> &PokemonType::getImmuneTo() const {
    return immuneTo;
}
