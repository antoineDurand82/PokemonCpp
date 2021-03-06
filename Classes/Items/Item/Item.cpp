//
// Created by notitou on 15/02/2021.
//

#include "Item.h"
#include "../../Pokemon/Pokemon.h"
#include "../../Trainer/Trainer.h"

Item::Item(int id, const std::string &itemname, int price, const std::string &type) : id(id), itemname(itemname), price(price), type(type) {}

Item::Item() {}

const std::string &Item::getName() const {
    return itemname;
}

int Item::getPrice() const {
    return price;
}