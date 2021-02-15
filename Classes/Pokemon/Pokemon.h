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
    PokemonType type;
    int currentHP;
    int maxHP;
    std::vector<Move> moves;
public:
    Pokemon(int id, const std::string &name, const PokemonType &type, int currentHp,
            int maxHp, const std::vector<Move> &moves);
    void rename();

    void rename(std::string pokemonName);

    int useTM(Move move);
};


#endif //POKEMONCPP_POKEMON_H
