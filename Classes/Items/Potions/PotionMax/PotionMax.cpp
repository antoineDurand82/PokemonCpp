//
// Created by notitou on 15/02/2021.
//

#include "PotionMax.h"

PotionMax::PotionMax(int id, const std::string &name, int price, const std::string &type, int hpHeal) : HealItem(id,
                                                                                                                 name,
                                                                                                                 price,
                                                                                                                 type,
                                                                                                                 hpHeal) {}

void PotionMax::heal(Pokemon pokemon) {
    pokemon.setCurrentHp(pokemon.getMaxHp());
}




