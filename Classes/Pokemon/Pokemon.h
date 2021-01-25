//
// Created by notitou on 25/01/2021.
//

#ifndef POKEMONCPP_POKEMON_H
#define POKEMONCPP_POKEMON_H
#include <iostream>
#include "../Move/Move.h"
#include "../PokemonType/PokemonType.h"
#include <vector>


class Pokemon {
    private:

    int id;
    std::string pokemonName;
    std::string name;
    EnumPokemonType type;
    int hp;
    std::vector<Move> moves;
};


#endif //POKEMONCPP_POKEMON_H
