//
// Created by notitou on 25/01/2021.
//

#include "Pokemon.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

Pokemon::Pokemon(int id, const string &name, const PokemonType &type, int currentHp, int maxHp,
                 const vector<Move> &moves, bool isCaptured) : id(id), name(name), type(type),
                                                                    currentHP(currentHp), maxHP(maxHp), moves(moves),
                                                                    isCaptured(isCaptured) {}

Pokemon::Pokemon() {}

void Pokemon::rename(string newPokemonName) {
    setPokemonName(newPokemonName);
}

int Pokemon::useTM(Move *move){
    int hp = move->getPower() * 0.33;
    move->setPowerPoints(move->getPowerPoints() - 1);
    return hp;
}

bool Pokemon::canUseTM(Move *move){
    if(move->getPowerPoints() > 0){
        return true;
    }
    return false;
}

void Pokemon::setPokemonName(const string &pokemonName) {
    Pokemon::pokemonName = pokemonName;
}

const string &Pokemon::getName() const {
    return name;
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

const vector<Move> &Pokemon::getMoves() {
    return moves;
}

bool Pokemon::getIsCaptured() const {
    return isCaptured;
}

void Pokemon::setIsCaptured(bool isCaptured) {
    Pokemon::isCaptured = isCaptured;
}

void Pokemon::showMoves(){
    for (int i = 0; i < this->getMoves().size(); ++i) {
        cout << i + 1 << ". " << this->getMoves()[i].getName() << "       " << this->getMoves()[i].getPowerPoints() << "/" << this->getMoves()[i].getMaxPowerPoints() << endl;
    }
    return;
}

int Pokemon::randomAttack(){
    srand(time(NULL));
    Move *attackUsed =  &this->moves[rand() % this->moves.size()];
    if(this->canUseTM(attackUsed)){
        int damageMade = this->useTM(attackUsed);
        cout << this->getName() << " a utilis\202 " << attackUsed->getName() << " et a fait " << damageMade << " de d\202gat !" <<endl;
        return damageMade;
    }
    return randomAttack();
}

string Pokemon::hpleftOnHpmax() const {
    return to_string(this->getCurrentHp()) + " / " + to_string(this->getMaxHp());
}

bool Pokemon::checkAlived(){
    if(this->getCurrentHp() > 0){
        return true;
    }
    return false;
}

