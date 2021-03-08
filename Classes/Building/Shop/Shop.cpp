//
// Created by notitou on 16/02/2021.
//

#include "Shop.h"
using namespace std;

Shop::Shop(int id, const std::string &name, const std::vector<Item> &stock) : Building(id, name), stock(stock) {}

const std::vector<Item> &Shop::getStock() const {
    return stock;
}

void Shop::setStock(const std::vector<Item> &stock) {
    Shop::stock = stock;
}
void Shop::listItems(){
    cout << "Voici la liste des objets que vous pouvez acheter" << endl;
    for(unsigned int i = 0; i < stock.size(); ++i){
        cout << i + 1 << ". " << stock[i].getName() << "s." << endl;
    }
}

void Shop::askItems(Trainer *trainer){
    unsigned int itemChoosed;
    cout << "Quel items voulez-vous acheter ?" << endl;
    cin >> itemChoosed;
    cin.clear();
    if(itemChoosed > stock.size()){
        askItems();
    }else{
        unsigned int howManyItems;
        cout << "Combien voulez-vous de " << stock[itemChoosed-1].name << "s ?" << endl;
        cin >> howManyItems;
        cin.clear();
        cin.ignore(1000, '\n');
        if(howManyItems * stock[itemChoosed-1].price <= trainer->getMoney()){
            for(unsigned int i = 0; howManyItems < i; ++i){
                trainer.
            }
        }
    }

}
void Shop::welcomeToTheShop(Trainer *trainer) {
    int actionChoosed;
    cout << "Bienvenue dans notre boutique !" << endl;
    cout << "Que voulez-vous faire ?" << endl;
    cout << "1. Acheter" << endl;
    cout << "2. Partir" << endl;
    cin >> actionChoosed;
    cin.clear();
    cin.ignore(1000, '\n');
    switch (actionChoosed) {
        case 1:
            listItems();
            askItems();
            buy(trainer);
            break;
        case 2:
            return;
        default:
            cout << "Tu dois me donner un chiffre parmis ceux propos\202s";
            return welcomeToTheShop(trainer);
    }
}

void Shop::buy(Trainer *trainer) {
    cout << "buy function" << endl;
}