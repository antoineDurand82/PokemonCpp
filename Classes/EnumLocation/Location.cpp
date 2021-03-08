//
// Created by antoi on 15/02/2021.
//

#include "Location.h"

using namespace std;

const string &Location::getName() const {
    return name;
}

void Location::setName(const string &name) {
    Location::name = name;
}

const vector<Pokemon> &Location::getListPokemon() const {
    return listPokemon;
}

void Location::setListPokemon(const vector<Pokemon> &listPokemon) {
    Location::listPokemon = listPokemon;
}

Location::Location(const string &name, const vector<Pokemon> &listPokemon) : name(name),
                                                                                       listPokemon(listPokemon) {}

Location::Location() {}
