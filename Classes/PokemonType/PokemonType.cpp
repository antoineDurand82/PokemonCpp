//
// Created by notitou on 25/01/2021.
//

#include "PokemonType.h"

PokemonType::PokemonType(const std::string &name, const std::vector<PokemonType> &weakAgainst,
                         const std::vector<PokemonType> &strongAgainst,
                         const std::vector<PokemonType> &notEffectiveAgainst, const std::vector<PokemonType> &weakTo,
                         const std::vector<PokemonType> &stringTo, const std::vector<PokemonType> &notEffectiveTo)
        : name(name), weakAgainst(weakAgainst), strongAgainst(strongAgainst), notEffectiveAgainst(notEffectiveAgainst),
          weakTo(weakTo), stringTo(stringTo), notEffectiveTo(notEffectiveTo) {}

PokemonType::PokemonType() {}
