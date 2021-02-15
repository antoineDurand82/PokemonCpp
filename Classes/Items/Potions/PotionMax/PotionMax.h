//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_POTIONMAX_H
#define POKEMONCPP_POTIONMAX_H


#include "../../Item/Item.h"
#include "../HealItem.h"

class PotionMax : public HealItem{
public:
    PotionMax(int id, const std::string &name, int price, int hpHeal);
    void heal(Pokemon pokemon);
};


#endif //POKEMONCPP_POTIONMAX_H
