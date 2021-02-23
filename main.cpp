#include "Classes/PokemonType/PokemonType.h"
#include "Classes/Pokemon/Pokemon.h"
#include <iostream>
#include "data/Init/Init.h"
#include "Classes/Trainer/Trainer.h"
using namespace std;

int main() {
    Trainer salut = Trainer();
    salut.searchWildPokemon();
    return 0;
}
