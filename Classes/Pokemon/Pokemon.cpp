//
// Created by notitou on 25/01/2021.
//

#include "Pokemon.h"

Pokemon::Pokemon(int id, const std::string &name, const PokemonType &type, int currentHp, int maxHp,
                 const std::vector<Move> &moves, bool isCaptured) : id(id), name(name), type(type),
                                                                    currentHP(currentHp), maxHP(maxHp), moves(moves),
                                                                    isCaptured(isCaptured) {}
                                                                    
void Pokemon::rename(std::string newPokemonName) {
    this->pokemonName = newPokemonName;
}

int Pokemon::useTM(Move move){
    int hp = move.getPower() * 0.33;
    return hp;
}

int Pokemon::getId() const {
    return id;
}

void Pokemon::setId(int id) {
    Pokemon::id = id;
}

const std::string &Pokemon::getPokemonName() const {
    return pokemonName;
}

void Pokemon::setPokemonName(const std::string &pokemonName) {
    Pokemon::pokemonName = pokemonName;
}

const std::string &Pokemon::getName() const {
    return name;
}

void Pokemon::setName(const std::string &name) {
    Pokemon::name = name;
}

const PokemonType &Pokemon::getType() const {
    return type;
}

void Pokemon::setType(const PokemonType &type) {
    Pokemon::type = type;
}

int Pokemon::getCurrentHp() const {
    return currentHP;
}

void Pokemon::setCurrentHp(int currentHp) {
    currentHP = currentHp;
}

int Pokemon::getMaxHp() const {
    return maxHP;
}

void Pokemon::setMaxHp(int maxHp) {
    maxHP = maxHp;
}

const std::vector<Move> &Pokemon::getMoves() const {
    return moves;
}

void Pokemon::setMoves(const std::vector<Move> &moves) {
    Pokemon::moves = moves;
}
