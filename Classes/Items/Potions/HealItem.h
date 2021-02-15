//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_HEALITEM_H
#define POKEMONCPP_HEALITEM_H


#include "../Item/Item.h"
#include "../../Pokemon/Pokemon.h"

class HealItem : public Item {
    int hpHeal;
public:
    HealItem(int id, const std::string &name, int price, int hpHeal);
    void heal(Pokemon pokemon);
};


#endif //POKEMONCPP_HEALITEM_H
