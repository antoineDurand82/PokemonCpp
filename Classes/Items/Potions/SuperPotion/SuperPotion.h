//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_SUPERPOTION_H
#define POKEMONCPP_SUPERPOTION_H


#include "../../Item/Item.h"
#include "../HealItem.h"

class SuperPotion : public HealItem{
public:
    SuperPotion(int id, const std::string &name, int price, const std::string &type, int hpHeal);

};


#endif //POKEMONCPP_SUPERPOTION_H
