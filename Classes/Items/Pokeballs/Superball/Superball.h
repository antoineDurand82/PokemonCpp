//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_SUPERBALL_H
#define POKEMONCPP_SUPERBALL_H


#include "../../Item/Item.h"
#include "../BallItem.h"

class Superball : public BallItem {
public:
    Superball(int id, const std::string &name, int price, int catchRate);
};


#endif //POKEMONCPP_SUPERBALL_H
