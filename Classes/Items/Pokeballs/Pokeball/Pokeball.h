//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_POKEBALL_H
#define POKEMONCPP_POKEBALL_H


#include "../../Item/Item.h"
#include "../BallItem.h"

class Pokeball : public BallItem {

public:
    Pokeball(int id, const std::string &name, int price, int catchRate);
};



#endif //POKEMONCPP_POKEBALL_H
