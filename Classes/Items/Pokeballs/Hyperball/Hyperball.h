//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_HYPERBALL_H
#define POKEMONCPP_HYPERBALL_H


#include "../../Item/Item.h"
#include "../BallItem.h"

class Hyperball : public BallItem {
public:

    Hyperball(int id, const std::string &name, int price, int catchRate, const std::string &type);
};


#endif //POKEMONCPP_HYPERBALL_H
