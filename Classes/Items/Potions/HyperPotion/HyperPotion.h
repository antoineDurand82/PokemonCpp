//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_HYPERPOTION_H
#define POKEMONCPP_HYPERPOTION_H


#include "../../Item/Item.h"
#include "../HealItem.h"

class HyperPotion : public HealItem {
public:
    HyperPotion(int id, const std::string &name, int price, int hpHeal);
};


#endif //POKEMONCPP_HYPERPOTION_H
