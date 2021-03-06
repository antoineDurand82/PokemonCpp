//
// Created by notitou on 15/02/2021.
//

#include "BallItem.h"
#include <iostream>
#include "../../Pokemon/Pokemon.h"
using namespace std;

BallItem::BallItem(int id, const string &name, int price, int catchRate, const std::string &type) : Item(id, name, price, type),
                                                                                catchRate(catchRate) {}

BallItem::BallItem() {}


bool BallItem::tryCatch(Pokemon *pokemon) {
    if(pokemon->getIsCaptured()){
        cout << "Ce pok\202mon ne peut \210tre captur\202, il appartient d\202j\205 un dresseur." << endl;
        return false;
    }
    if(catchRate == 100){
        pokemon->setIsCaptured(true);
        return true;
    }
    int catchPercent = rand() % 100 + 1;
    if(catchRate > catchPercent){
        return true;
    }
    return false;
}

void BallItem::catching(Pokemon *pokemon, bool *endBattle) {
    cout << this->getName() << " est lanc\202 sur " << pokemon->getName() << "..." << endl;
    bool canCatch = tryCatch(pokemon);

    if(!canCatch){
        cout << "La capture a \202chou\202." << endl;
    }else{
        cout << pokemon->getName() << " a \202t\202 captur\202 !" << endl;
       *endBattle = true;
    }
    return;
}

BallItem::BallItem(Item item) {

}


