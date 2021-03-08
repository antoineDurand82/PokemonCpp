//
// Created by notitou on 25/01/2021.
//

#include "PokemonType.h"
using namespace std;

PokemonType::PokemonType(const string &name, const vector<string> &weakAgainst,
                         const vector<string> &strongAgainst,
                         const vector<string> &notEffectiveAgainst, const vector<string> &weakTo,
                         const vector<string> &resistTo, const vector<string> &immuneTo) : name(
        name), weakAgainst(weakAgainst), strongAgainst(strongAgainst), notEffectiveAgainst(notEffectiveAgainst),
                                                                                                               weakTo(weakTo),
                                                                                                               resistTo(
                                                                                                                       resistTo),
                                                                                                               immuneTo(
                                                                                                                       immuneTo) {}

PokemonType::PokemonType() {}

const string &PokemonType::getName() const {
    return name;
}

const vector<string> &PokemonType::getWeakAgainst() const {
    return weakAgainst;
}

const vector<string> &PokemonType::getStrongAgainst() const {
    return strongAgainst;
}

const vector<string> &PokemonType::getNotEffectiveAgainst() const {
    return notEffectiveAgainst;
}

const vector<string> &PokemonType::getWeakTo() const {
    return weakTo;
}

const vector<string> &PokemonType::getResistTo() const {
    return resistTo;
}

const vector<string> &PokemonType::getImmuneTo() const {
    return immuneTo;
}
