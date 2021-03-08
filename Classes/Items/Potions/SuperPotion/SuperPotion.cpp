//
// Created by notitou on 15/02/2021.
//

#include "SuperPotion.h"

SuperPotion::SuperPotion(int id, const std::string &name, int price, const std::string &type, int hpHeal) : HealItem(id,
                                                                                                                     name,
                                                                                                                     price,
                                                                                                                     type,
                                                                                                                     hpHeal) {}
