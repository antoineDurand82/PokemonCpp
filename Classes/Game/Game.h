//
// Created by antoi on 06/03/2021.
//

#ifndef POKEMONCPP_GAME_H
#define POKEMONCPP_GAME_H


#include "../Trainer/Trainer.h"
#include "../Building/PokemonCenter/PokemonCenter.h"
#include "../Building/Shop/Shop.h"

class Game {
private:
    Trainer trainer;
    PokemonCenter  pokeCenter;
    Shop shop;
public:
    Game(const Trainer &trainer, const PokemonCenter &pokeCenter, const Shop &shop);

    void play();

    void usePc();

    void useShop();
};


#endif //POKEMONCPP_GAME_H
