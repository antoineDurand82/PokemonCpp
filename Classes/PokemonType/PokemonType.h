//
// Created by notitou on 25/01/2021.
//

#ifndef POKEMONCPP_POKEMONTYPE_H
#define POKEMONCPP_POKEMONTYPE_H
#include <iostream>
#include <vector>
#endif //POKEMONCPP_ENUMPOKEMONTYPE_H

class PokemonType {
private:
    std::string name;
    std::vector<PokemonType> weakAgainst;
    std::vector<PokemonType> strongAgainst;
    std::vector<PokemonType> notEffectiveAgainst;
    std::vector<PokemonType> weakTo;
    std::vector<PokemonType> stringTo;
    std::vector<PokemonType> notEffectiveTo;
public:
    PokemonType(const std::string &name, const std::vector<PokemonType> &weakAgainst,
                const std::vector<PokemonType> &strongAgainst, const std::vector<PokemonType> &notEffectiveAgainst,
                const std::vector<PokemonType> &weakTo, const std::vector<PokemonType> &stringTo,
                const std::vector<PokemonType> &notEffectiveTo);

    PokemonType();
};

