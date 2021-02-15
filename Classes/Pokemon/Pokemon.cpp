//
// Created by notitou on 25/01/2021.
//

#include "Pokemon.h"

Pokemon::Pokemon(int id, const std::string &name, const PokemonType &type,
                 int currentHp, int maxHp, const std::vector<Move> &moves) : id(id), pokemonName(pokemonName),
                                                                             name(name), type(type),
                                                                             currentHP(currentHp), maxHP(maxHp),
                                                                             moves(moves) {}
void Pokemon::rename(std::string newPokemonName) {
    this->pokemonName = newPokemonName;
}

int Pokemon::useTM(Move move){
    int hp = move.getPower() * 0.33;
    return hp;
}