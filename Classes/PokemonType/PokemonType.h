//
// Created by notitou on 25/01/2021.
//

#ifndef POKEMONCPP_POKEMONTYPE_H
#define POKEMONCPP_POKEMONTYPE_H
#include <iostream>
#include <vector>


class PokemonType {
private:
    std::string name;
    std::vector<std::string> weakAgainst;
    std::vector<std::string> strongAgainst;
    std::vector<std::string> notEffectiveAgainst;
    std::vector<std::string> weakTo;
    std::vector<std::string> resistTo;
    std::vector<std::string> immuneTo;
public:

    PokemonType(const std::string &name, const std::vector<std::string> &weakAgainst,
                const std::vector<std::string> &strongAgainst, const std::vector<std::string> &notEffectiveAgainst,
                const std::vector<std::string> &weakTo, const std::vector<std::string> &resistTo,
                const std::vector<std::string> &immuneTo);

    const std::string &getName() const;

    const std::vector<std::string> &getWeakAgainst() const;

    const std::vector<std::string> &getStrongAgainst() const;

    const std::vector<std::string> &getNotEffectiveAgainst() const;

    const std::vector<std::string> &getWeakTo() const;

    const std::vector<std::string> &getResistTo() const;

    const std::vector<std::string> &getImmuneTo() const;
};

#endif //POKEMONCPP_POKEMONTYPE_H