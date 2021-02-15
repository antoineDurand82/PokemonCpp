//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_ITEM_H
#define POKEMONCPP_ITEM_H
#include <iostream>


class Item {
public:
    int id;
    std::string name;
    int price;
    Item(int id, const std::string &name, int price);
};


#endif //POKEMONCPP_ITEM_H
