//
// Created by antoi on 06/03/2021.
//

#ifndef POKEMONCPP_GAME_H
#define POKEMONCPP_GAME_H


#include "../Trainer/Trainer.h"
#include "../Building/PokemonCenter/PokemonCenter.h"

class Game {
private:
    Trainer trainer;
    PokemonCenter  pokeCenter;
public:
    Game(const Trainer &trainer, const PokemonCenter &pokeCenter);

    void play();

    void usePc();
};


#endif //POKEMONCPP_GAME_H
