//
// Created by notitou on 15/02/2021.
//

#include "BallItem.h"
#include <iostream>
#include "../../Pokemon/Pokemon.h"

BallItem::BallItem(int id, const std::string &name, int price, int catchRate) : Item(id, name, price),
                                                                                catchRate(catchRate) {}
bool BallItem::tryCatch(Pokemon pokemon) {
    if(pokemon.getIsCaptured()){
        std::cout << "Ce pok\202mon ne peut \210tre captur\202, il appartient d\202j\205 un dresseur." << std::endl;
        return false;
    }
    if(catchRate == 100){
        pokemon.setIsCaptured(true);
        return true;
    }
    int catchPercent = rand() % 100 + 1;
    if(catchRate > catchPercent){
        return true;
    }
    return false;
}

void BallItem::use(Pokemon pokemon) {
    std::cout << name << " est lanc\202 sur " << pokemon.getName() << "..." << std::endl;
    bool canCatch = tryCatch(pokemon);

    if(!canCatch){
        std::cout << "La capture a \202chou\202." << std::endl;
    }else{
        std::cout << pokemon.getName() << " a \202t\202 captur\202 !" << std::endl;
    }
}