//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_ITEM_H
#define POKEMONCPP_ITEM_H
#include <iostream>
#include "../../Pokemon/Pokemon.h"


class Item {
public:
    Item(int id, const std::string &name, int price, const std::string &type);

    Item();

    int id;
    std::string itemname;
    int price;
    std::string type;
    int catchRate;
    int hpHeal;

    const std::string &getName() const;

    int getPrice() const;
};


#endif //POKEMONCPP_ITEM_H
