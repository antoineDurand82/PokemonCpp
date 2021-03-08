//
// Created by antoi on 25/01/2021.
//

#include <iostream>
#include "../Pokemon/Pokemon.h"
#include "../Items/Item/Item.h"
#include "../Items/Pokeballs/BallItem.h"
#include "../Items/Potions/HealItem.h"
#include <vector>

#ifndef POKEMONCPP_TRAINER_H
#define POKEMONCPP_TRAINER_H


class Trainer {

private:
    unsigned int id;
    std::string  name;
    unsigned int money;


public:
    Trainer(int id, const std::string &name, const std::vector<Pokemon> &teams, const std::vector<Pokemon> &pc,
            int money, const std::vector<HealItem> &healInventory, const std::vector<BallItem> &ballInventory);

    std::vector<Pokemon> teams;
    std::vector<Pokemon> pc;
    std::vector<HealItem> healInventory;
    std::vector<BallItem> ballInventory;

    const std::string &getName() const;

    const std::vector<Pokemon> &getTeams() const;

    int getMoney() const;

    void setMoney(int money);

    void searchWildPokemon();

    void runAway(bool *pBoolean);

    void chooseAction(Pokemon *pokemonChoosed, Pokemon *wildPokemon, bool *pBoolean, const std::vector<Move> *pokemonMoves);

    void changePokemon(Pokemon *pPokemon);

    void chooseAttack(Pokemon *pokemonChoosed, Pokemon *wildPokemon, const std::vector<Move> *pokemonMoves);

    void battle(Pokemon *wildPokemon);

    void getTeamsToString();

    void useItem(Pokemon *pokemonChoosed, Pokemon *wildPokemon, bool *endBattle);

    const std::vector<HealItem> &getHealInventory() const;

    const std::vector<BallItem> &getBallInventory() const;

    void listBallInventory();

    void listHealInventory();

};


#endif //POKEMONCPP_TRAINER_H
