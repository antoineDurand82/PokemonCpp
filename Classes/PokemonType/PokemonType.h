//
// Created by antoi on 25/01/2021.
//

#ifndef POKEMONCPP_POKEMONTYPE_H
#define POKEMONCPP_POKEMONTYPE_H
#include <iostream>
#include <vector>

class PokemonType {
private:
    std::string name;
    std::vector<PokemonType> weakAgainst;
    std::vector<PokemonType> strongAgaisnt;
    std::vector<PokemonType> weakTo;
    std::vector<PokemonType> stringTo;
    std::vector<PokemonType> notEffectiveTo;

};


#endif //POKEMONCPP_POKEMONTYPE_H
