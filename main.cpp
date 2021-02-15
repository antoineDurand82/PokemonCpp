#include "Classes/PokemonType/PokemonType.h"
#include "Classes/Pokemon/Pokemon.h"
#include <iostream>
#include "data/PokemonTypes/pokemonTypes.h"
using namespace std;

int main() {

    Move Charge = {"Charge", NORMAL, 40, 100, 40};
    Pokemon Darkrai = {1, "Darkrai", TENEBRES, 250, 250, {Charge}, false};
    return 0;
}
