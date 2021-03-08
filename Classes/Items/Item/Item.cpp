//
// Created by notitou on 15/02/2021.
//

#include "Item.h"
#include "../../Trainer/Trainer.h"

using namespace std;

Item::Item(int id, const string &itemname, int price, const string &type) : id(id), itemname(itemname), price(price), type(type) {}

Item::Item() {}

const string &Item::getName() const {
    return itemname;
}

int Item::getPrice() const {
    return price;
}