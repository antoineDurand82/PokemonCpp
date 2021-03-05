//
// Created by notitou on 15/02/2021.
//

#include "HealItem.h"

HealItem::HealItem(int id, const std::string &name, int price, int hpHeal) : Item(id, name, price),
                                                                             hpHeal(hpHeal) {}
void HealItem::heal(Pokemon pokemon) {
    pokemon.setCurrentHp(pokemon.getCurrentHp() + hpHeal);
}