//
// Created by notitou on 15/02/2021.
//

#include "BallItem.h"
#include <iostream>

BallItem::BallItem(int id, const std::string &name, int price, int catchRate) : Item(id, name, price),
                                                                                catchRate(catchRate) {}
bool BallItem::tryCatch(Pokemon pokemon) {
    if(pokemon.getIsCaptured()){
        std::cout << "Ce pokémon ne peut être capturé, il appartient déjà un dresseur." << std::endl;
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
    std::cout << name << " est lancé sur " << pokemon.getName() << "..." << std::endl;
    bool canCatch = tryCatch(pokemon);

    if(!canCatch){
        std::cout << "La capture a échoué." << endl;
    }else{
        std::cout << pokemon.getName() << " a été capturé !" << std::endl;
    }
}
