//
// Created by notitou on 15/02/2021.
//

#include "PotionMax.h"

PotionMax::PotionMax(int id, const std::string &name, int price, int hpHeal) : HealItem(id, name, price, hpHeal) {}
void PotionMax::heal(Pokemon pokemon) {
    pokemon.setCurrentHp(pokemon.getMaxHp());
}