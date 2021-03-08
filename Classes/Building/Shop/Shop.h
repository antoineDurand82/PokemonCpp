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

    Shop(int id, const std::string &name, const std::vector<BallItem> &ballStock,
         const std::vector<HealItem> &healStock);

    const std::vector<Item> &getStock() const;

    void setStock(const std::vector<Item> &stock);

    std::vector<BallItem> ballStock;
    std::vector<HealItem> healStock;

    void listItems();

    void welcomeToTheShop(Trainer *trainer);


    void askItems(Trainer *trainer);

    void ballList();

    void healList();
};

#endif //POKEMONCPP_SHOP_H
