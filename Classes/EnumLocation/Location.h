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

    void setName(const std::string &name);

    const std::vector<Pokemon> &getListPokemon() const;

    void setListPokemon(const std::vector<Pokemon> &listPokemon);
};


#endif //POKEMONCPP_LOCATION_H
