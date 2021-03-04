//
// Created by notitou on 15/02/2021.
//

#ifndef POKEMONCPP_BALLITEM_H
#define POKEMONCPP_BALLITEM_H
#include "../Item/Item.h"
<<<<<<< HEAD
=======
#include "../../Pokemon/Pokemon.h"
>>>>>>> 966279dd5a88c938e9269b1f5a6f8a63aaa1ad9c

class BallItem : public Item {
private:
    int catchRate;
public:
    BallItem(int id, const std::string &name, int price, int catchRate);
<<<<<<< HEAD
=======
    bool tryCatch(Pokemon pokemon);
    void use(Pokemon pokemon);
>>>>>>> 966279dd5a88c938e9269b1f5a6f8a63aaa1ad9c
};


#endif //POKEMONCPP_BALLITEM_H
