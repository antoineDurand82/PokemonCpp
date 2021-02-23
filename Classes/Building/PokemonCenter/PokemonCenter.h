//
// Created by notitou on 16/02/2021.
//

#ifndef POKEMONCPP_POKEMONCENTER_H
#define POKEMONCPP_POKEMONCENTER_H


#include "../Building.h"

class PokemonCenter : public Building {
public:
    PokemonCenter(int id, const std::string &name);
    void healPokemons(Trainer trainer);
    void goToPC(Trainer trainer);
};


#endif //POKEMONCPP_POKEMONCENTER_H
