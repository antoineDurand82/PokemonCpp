//
// Created by notitou on 16/02/2021.
//

#include "Shop.h"

Shop::Shop(int id, const std::string &name, const std::vector<Item> &stock) : Building(id, name), stock(stock) {}

const std::vector<Item> &Shop::getStock() const {
    return stock;
}

void Shop::setStock(const std::vector<Item> &stock) {
    Shop::stock = stock;
}