//
// Created by antoi on 15/02/2021.
//

#include "Location.h"

const std::string &Location::getName() const {
    return name;
}

void Location::setName(const std::string &name) {
    Location::name = name;
}

const std::vector<Pokemon> &Location::getListPokemon() const {
    return listPokemon;
}

void Location::setListPokemon(const std::vector<Pokemon> &listPokemon) {
    Location::listPokemon = listPokemon;
}

Location::Location(const std::string &name, const std::vector<Pokemon> &listPokemon) : name(name),
                                                                                       listPokemon(listPokemon) {}

Location::Location() {}
