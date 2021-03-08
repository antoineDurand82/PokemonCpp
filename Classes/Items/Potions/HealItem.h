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
    HealItem(int id, const std::string &name, int price, const std::string &type, int hpHeal);

    HealItem();

    HealItem(Item item);

    int getHpHeal() const;

    void heal(Pokemon *pokemon, std::vector<HealItem> *potionList, unsigned short *index);
};


#endif //POKEMONCPP_HEALITEM_H
