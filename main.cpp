#include "data/Init/Init.h"
#include "Classes/Trainer/Trainer.h"
using namespace std;

int main() {
    Trainer salut = Trainer(1,  "sacha", {Darkrai, Tortank, Tortank, Tortank, Tortank}, {Registeel, Arcanin}, 5000, {HyperPotionItem, PotionMaxItem}, {PokeBall, HyperBall});
    salut.searchWildPokemon();
}