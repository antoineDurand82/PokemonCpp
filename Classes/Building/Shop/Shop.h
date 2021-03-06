//
// Created by notitou on 16/02/2021.
//

#ifndef POKEMONCPP_SHOP_H
#define POKEMONCPP_SHOP_H


#include "../Building.h"
<<<<<<< HEAD
#include "../../Items/Item/Item.h"
#include "vector"

class Shop : public Building {
private:
    std::vector<Item> stock;
public:
    Shop(int id, const std::string &name, const std::vector<Item> &stock);

    const std::vector<Item> &getStock() const;

    void setStock(const std::vector<Item> &stock);
=======

class Shop : public Building {
    vector<Item> stock;
>>>>>>> 22cbff292dc77d71398882cf2fbd07d0a9c83b03
};


#endif //POKEMONCPP_SHOP_H
