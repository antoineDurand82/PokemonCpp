//
// Created by antoi on 15/02/2021.
//

#ifndef POKEMONCPP_LOCATION_H
#define POKEMONCPP_LOCATION_H
#include <iostream>
#include <vector>
#include "../Pokemon/Pokemon.h"

class Location {
private:
    std::string  name;
    std::vector<Pokemon> listPokemon;
public:
    const std::string &getName() const;

    const std::vector<Pokemon> &getListPokemon() const;

    Location(const std::string &name, const std::vector<Pokemon> &listPokemon);

    Location();
};


#endif //POKEMONCPP_LOCATION_H
