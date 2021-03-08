//
// Created by notitou on 16/02/2021.
//

#include "Shop.h"

using namespace std;

Shop::Shop(int id, const string &name, const vector<BallItem> &ballStock, const vector<HealItem> &healStock) : Building(
        id, name), ballStock(ballStock), healStock(healStock) {}

void Shop::healList(){
    cout << "Voici la liste des objets que vous pouvez acheter :" << endl;
    for(unsigned int i = 0; i < healStock.size(); ++i){
        cout << i + 1 << ". " << healStock[i].itemname << " | " << healStock[i].getPrice() << " Pok\202dollars." << endl;
    }
}

void Shop::ballList(){
    cout << "Voici la liste des objets que vous pouvez acheter :" << endl;
    for(unsigned int i = 0; i < ballStock.size(); ++i){
        cout << i + 1 << ". " << ballStock[i].itemname << " | " << ballStock[i].getPrice() << " Pok\202dollars." << endl;
    }
}

void Shop::askItems(Trainer *trainer) {
    unsigned itemTypeChoosed;
    unsigned healChoosed;
    unsigned ballChoosed;
    unsigned howManyItems;
    cout << "Que voulez-vous acheter ?" << endl;
    cout << "1. Balls" << endl;
    cout << "2. Potions" << endl;
    cin >> itemTypeChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (itemTypeChoosed) {
        case 1:
            cout << "----------------------------------------------" << endl;
            cout << "Quels balls voulez-vous acheter ?" << endl;
            ballList();
            cin >> ballChoosed;
            cin.clear();
            cin.ignore(1000, '\n');
            if(ballChoosed > healStock.size() - 1|| ballChoosed < 1){
                cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
                return askItems(trainer);
            }else {
                cout << "Combien voulez-vous de " << ballStock[ballChoosed - 1].getName() << "?" << endl;
                cin >> howManyItems;
                cin.clear();
                cin.ignore(1000, '\n');
                if (howManyItems * ballStock[ballChoosed - 1].price <= trainer->getMoney()) {
                    for (unsigned int i = 0; howManyItems > i; ++i) {
                        trainer->ballInventory.push_back(ballStock[ballChoosed - 1]);
                    }
                    trainer->setMoney(trainer->getMoney() - howManyItems * ballStock[ballChoosed - 1].price);
                    cout << "Vous avez achet\202 " << howManyItems << " " << ballStock[ballChoosed - 1].getName()
                         << " et vous avez d\202pens\202 " << howManyItems * ballStock[ballChoosed - 1].getPrice()
                         << " Pok\202dollars." << endl;
                    cout << "Il vous reste " << trainer->getMoney() << " Pok\202dollars." << endl;
                } else {
                    cout << "----------------------------------------------" << endl;
                    cout << "Vous n'avez pas assez d'argent" << endl;
                    cout << "----------------------------------------------" << endl;
                    return welcomeToTheShop(trainer);
                }
            }
            break;
        case 2:
            cout << "----------------------------------------------" << endl;
            cout << "Quels potions voulez-vous acheter ?" << endl;
            healList();
            cin >> healChoosed;
            cin.clear();
            cin.ignore(1000, '\n');
            if(healChoosed > healStock.size()|| healChoosed < 1){
                cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
                return askItems(trainer);
            }else {
                cout << "Combien voulez-vous de " << healStock[healChoosed - 1].getName() << "?" << endl;
                cin >> howManyItems;
                cin.clear();
                cin.ignore(1000, '\n');
                if (howManyItems * healStock[healChoosed - 1].price <= trainer->getMoney()) {
                    for (unsigned int i = 0; howManyItems > i; ++i) {
                        trainer->healInventory.push_back(healStock[healChoosed - 1]);
                    }
                    trainer->setMoney(trainer->getMoney() - howManyItems * healStock[healChoosed - 1].price);
                    cout << "Vous avez achet\202 " << howManyItems << " " << healStock[healChoosed - 1].getName()
                         << " et vous avez d\202pens\202 " << howManyItems * healStock[healChoosed - 1].getPrice()
                         << " Pok\202dollars." << endl;
                    cout << "Il vous reste " << trainer->getMoney() << " Pok\202dollars." << endl;
                } else {
                    cout << "----------------------------------------------" << endl;
                    cout << "Vous n'avez pas assez d'argent" << endl;
                    cout << "----------------------------------------------" << endl;
                    return welcomeToTheShop(trainer);
                }
            }
            break;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
            return askItems(trainer);
    }
}
void Shop::welcomeToTheShop(Trainer *trainer) {
    int actionChoosed;
    cout << "Bienvenue dans notre boutique !" << endl;
    cout << "Vous disposez de " << trainer->getMoney() << " pok\202dollars." << endl;
    cout << "Que voulez-vous faire ?" << endl;
    cout << "1. Acheter" << endl;
    cout << "2. Partir" << endl;
    cin >> actionChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (actionChoosed) {
        case 1:
            askItems(trainer);
            break;
        case 2:
            return;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s" << endl;
            return welcomeToTheShop(trainer);
    }
}