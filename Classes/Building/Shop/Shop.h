//
// Created by notitou on 16/02/2021.
//

#ifndef POKEMONCPP_SHOP_H
#define POKEMONCPP_SHOP_H


#include "../Building.h"
#include "../../Items/Item/Item.h"
#include "vector"
#include "../../Trainer/Trainer.h"

class Shop : public Building {
public:
    Shop(int id, const std::string &name, const std::vector<Item> &stock);

    const std::vector<Item> &getStock() const;

    void setStock(const std::vector<Item> &stock);

    void buy(Trainer *trainer);

    std::vector<Item> stock;

    void listItems();

    void welcomeToTheShop(Trainer *trainer);

    void askItems();

    void askItems(Trainer *trainer);
};

#endif //POKEMONCPP_SHOP_H
