//
// Created by antoi on 15/02/2021.
//

#include "Location.h"

using namespace std;

const string &Location::getName() const {
    return name;
}

const vector<Pokemon> &Location::getListPokemon() const {
    return listPokemon;
}

Location::Location(const string &name, const vector<Pokemon> &listPokemon) : name(name),
                                                                                       listPokemon(listPokemon) {}

Location::Location() {}
