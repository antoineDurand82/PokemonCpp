//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_BALLITEM_H
#define POKEMONCPP_BALLITEM_H
#include "../Item/Item.h"
#include "../../Pokemon/Pokemon.h"

class BallItem : public Item {
private:
    int catchRate;
public:
    BallItem(int id, const std::string &name, int price, int catchRate);
    bool tryCatch(Pokemon pokemon);
    void use(Pokemon pokemon);
};


#endif //POKEMONCPP_BALLITEM_H
