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
    int id;
    std::string  name;
    int money;


public:
    Trainer(int id, const std::string &name, const std::vector<Pokemon> &teams, const std::vector<Pokemon> &pc,
            int money, const std::vector<HealItem> &healInventory, const std::vector<BallItem> &ballInventory);

    std::vector<Pokemon> teams;
    std::vector<Pokemon> pc;
    std::vector<HealItem> healInventory;
    std::vector<BallItem> ballInventory;

    int getId() const;

    void setId(int id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::vector<Pokemon> &getTeams() const;

    void setTeams(const std::vector<Pokemon> &teams);

    const std::vector<Pokemon> &getPc() const;

    void setPc(const std::vector<Pokemon> &pc);

    int getMoney() const;

    void setMoney(int money);

    const std::vector<Item> &getInventory() const;

    void setInventory(const std::vector<Item> &inventory);

    void searchWildPokemon();

    void runAway(bool *pBoolean);

    void chooseAction(Pokemon *pokemonChoosed, Pokemon *wildPokemon, bool *pBoolean, const std::vector<Move> *pokemonMoves);

    void changePokemon(Pokemon *pPokemon);

    void chooseAttack(Pokemon *pokemonChoosed, Pokemon *wildPokemon, const std::vector<Move> *pokemonMoves);

    void battle(Pokemon *wildPokemon);

    void getTeamsToString();

    void useItem(Pokemon *pokemonChoosed, Pokemon *wildPokemon, bool *endBattle);

    const std::vector<HealItem> &getHealInventory() const;

    void setHealInventory(const std::vector<HealItem> &healInventory);

    const std::vector<BallItem> &getBallInventory() const;

    void setBallInventory(const std::vector<BallItem> &ballInventory);

    void listBallInventory();

    void listHealInventory();

    void goToPokemonCenter();
};


#endif //POKEMONCPP_TRAINER_H
