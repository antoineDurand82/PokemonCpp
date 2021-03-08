//
// Created by notitou on 15/02/2021.
//

#include "Potion.h"

Potion::Potion(int id, const std::string &name, int price, const std::string &type, int hpHeal) : HealItem(id, name,
                                                                                                           price, type,
                                                                                                           hpHeal) {}
