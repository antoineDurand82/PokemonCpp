//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_POTION_H
#define POKEMONCPP_POTION_H


#include "../../Item/Item.h"
#include "../HealItem.h"

class Potion : public HealItem {
public:

    Potion(int id, const std::string &name, int price, const std::string &type, int hpHeal);
};


#endif //POKEMONCPP_POTION_H
