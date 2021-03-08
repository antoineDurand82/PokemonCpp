//
// Created by notitou on 15/02/2021->
//

#include "HealItem.h"
#include <iostream>
using namespace std;

HealItem::HealItem(int id, const string &name, int price, const string &type, int hpHeal) : Item(id, name, price, type),
                                                                                            hpHeal(hpHeal) {}


int HealItem::getHpHeal() const {
    return hpHeal;
}

void HealItem::heal(Pokemon *pokemon, vector<HealItem> *potionList, unsigned short *index) {
    if(pokemon->checkAlived()){
        if(pokemon->getCurrentHp() == pokemon->getMaxHp()){
            cout << pokemon->getName() << " n'a pas besoin d'\210tre soign\202" << ". Vous passez votre tour." << endl;
            return;
        }else if(pokemon->getCurrentHp() + this->getHpHeal() > pokemon->getMaxHp()){
            pokemon->setCurrentHp(pokemon->getMaxHp());
        } else {
            pokemon->setCurrentHp(pokemon->getCurrentHp() + this->getHpHeal());
        }
        cout << "Vous avez utilis\202 une " << this->getName() << " votre " << pokemon->getName() << " poss\212de maintenant " << pokemon->hpleftOnHpmax() << " hp" << endl;
        potionList->erase(potionList->begin() + (*index - 1));
    } else {
        cout << "Votre " << pokemon->getName() << " est KO, vous ne pouvez pas utiliser de potion sur lui" << endl;
    }

    return;
}

HealItem::HealItem(Item item) {

}

HealItem::HealItem() {}




