//
// Created by notitou on 25/01/2021.
//

#include "PokemonType.h"

PokemonType::PokemonType() {}

PokemonType::PokemonType(const std::string &name, const std::vector<std::string> &weakAgainst,
                         const std::vector<std::string> &strongAgainst,
                         const std::vector<std::string> &notEffectiveAgainst, const std::vector<std::string> &weakTo,
                         const std::vector<std::string> &resistTo, const std::vector<std::string> &immuneTo) : name(
        name), weakAgainst(weakAgainst), strongAgainst(strongAgainst), notEffectiveAgainst(notEffectiveAgainst),
                                                                                                               weakTo(weakTo),
                                                                                                               resistTo(
                                                                                                                       resistTo),
                                                                                                               immuneTo(
                                                                                                                       immuneTo) {}
