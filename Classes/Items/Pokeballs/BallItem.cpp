//
// Created by notitou on 15/02/2021.
//

#include "BallItem.h"

BallItem::BallItem(int id, const std::string &name, int price, int catchRate) : Item(id, name, price),
                                                                                catchRate(catchRate) {}
