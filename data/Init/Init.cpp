//
// Created by antoi on 23/02/2021.
//

#include "Init.h"


using namespace std;

int log_types(){
    cout << "----------------------------------------------" << endl;
    cout << "Initialisation des types en cours :" << endl;
    return 1;
}

int a = log_types();

PokemonType ACIER = {"ACIER", {"ACIER", "EAU", "ELECTRIK", "FEU"}, {"FEE", "GLACE", "ROCHE"}, {}, {"COMBAT", "FEU", "SOL"}, {"ACIER", "DRAGON", "FEE", "VOL", "INSECTE", "PLANTE", "GLACE", "NORMAL", "PSY", "ROCHE"}, {"POISON"}};
PokemonType COMBAT = {"COMBAT", {"INSECTE", "FEE", "VOL", "POISON", "PSY"}, {"TENEBRES", "GLACE", "NORMAL", "ROCHE", "ACIER"}, {"SPECTRE"}, {"FEE", "VOL", "PSY"}, {"INSECTE", "TENEBRES", "ROCHE"}, {}};
PokemonType DRAGON = {"DRAGON", {"ACIER"}, {"DRAGON"}, {"FEE"}, {"DRAGON", "FEE", "GLACE"}, {"ELECTRIK", "FEU", "PLANTE", "EAU"}, {}};
PokemonType EAU = {"EAU", {"DRAGON", "PLANTE", "EAU"}, {"FEU", "SOL", "ROCHE"}, {}, {"ELECTRIK", "PLANTE"}, {"FEU", "GLACE", "ACIER", "EAU"}, {}};
PokemonType ELECTRIK = {"ELECTRIK", {"DRAGON", "ELECTRIK", "PLANTE"}, {"VOL", "EAU"}, {"SOL"}, {"SOL"}, {"ELECTRIK", "VOL", "ACIER"}, {}};
PokemonType FEE = {"FEE", {"FEU", "POISON", "ACIER"}, {"TENEBRES", "DRAGON", "COMBAT"}, {}, {"POISON", "ACIER"}, {"INSECTE", "TENEBRES", "COMBAT"}, {"DRAGON"}};
PokemonType FEU = {"FEU", {"DRAGON", "FEU", "ROCHE", "EAU"}, {"INSECTE", "PLANTE", "GLACE", "ACIER"}, {}, {"SOL", "ROCHE", "EAU"}, {"INSECTE", "FEE", "FEU", "PLANTE", "GLACE", "ACIER"}, {}};
PokemonType GLACE = {"GLACE", {"FEU", "GLACE", "ACIER", "EAU"}, {"DRAGON", "VOL", "PLANTE", "SOL"}, {}, {"COMBAT", "FEU", "ROCHE", "ACIER"}, {"GLACE"}, {}};
PokemonType INSECTE = {"INSECTE", {"FEE", "COMBAT", "FEU", "VOL", "SPECTRE", "POISON", "ACIER"}, {"TENEBRES", "PLANTE", "PSY"}, {}, {"FEU", "VOL", "ROCHE"}, {"COMBAT", "PLANTE", "SOL"}, {}};
PokemonType NORMAL = {"NORMAL", {"ROCHE", "ACIER"}, {}, {"SPECTRE"}, {"COMBAT"}, {}, {"SPECTRE"}};
PokemonType PLANTE = {"PLANTE", {"INSECTE", "DRAGON", "FEU", "VOL", "PLANTE", "POISON", "ACIER"}, {"SOL", "ROCHE", "EAU"}, {}, {"INSECTE", "FEU", "VOL", "GLACE", "POISON"}, {"ELECTRIK", "PLANTE", "SOL", "EAU"}, {}};
PokemonType POISON = {"POISON", {"SPECTRE", "SOL", "POISON", "ROCHE"}, {"FEE", "PLANTE"}, {"ACIER"}, {"SOL", "PSY"}, {"INSECTE", "FEE", "COMBAT", "PLANTE", "POISON"}, {}};
PokemonType PSY = {"PSY", {"PSY", "ACIER"}, {"COMBAT", "POISON"}, {"TENEBRES"}, {"INSECTE", "TENEBRES", "SEPCTRE"}, {"COMBAT", "PSY"}, {}};
PokemonType ROCHE = {"ROCHE", {"COMBAT", "FEU", "VOL", "GLACE"}, {"INSECTE", "FEU", "VOL", "GLACE"}, {}, {"COMBAT", "PLANTE", "SOL", "ACIER", "EAU"}, {"FEU", "VOL", "NORMAL", "POISON"}, {}};
PokemonType SOL = {"SOL", {"INSECTE", "PLANTE"}, {"ELECTRIK", "FEU", "POISON", "ROCHE", "ACIER"}, {"VOL"}, {"PLANTE", "GLACE", "WATER"}, {"POISON", "ROCHE"}, {"ELECTRIK"}};
PokemonType SPECTRE = {"SPECTRE", {"TENEBRES"}, {"SPECTRE", "PSY"}, {"NORMAL"}, {"TENEBRES", "SPECTRE"}, {"INSECTE", "POISON"}, {"COMBAT", "NORMAL"}};
PokemonType TENEBRES = {"TENEBRES", {"TENEBRES", "FEE", "COMBAT"}, {"SPECTRE", "PSY"}, {}, {"INSECTE", "FEE", "COMBAT"}, {"TENEBRES", "SPECTRE"}, {"PSY"}};
PokemonType VOL = {"VOL", {"ELECTRIK", "ROCHE", "ACIER"}, {"INSECTE", "COMBAT", "PLANTE"}, {}, {"ELECTRIK", "GLACE", "ROCHE"}, {"INSECTE", "COMBAT", "PLANTE"}, {"SOL"}};

int log_moves(){
    cout << "Initialisation des types réussi !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Initialisation des attaques en cours :" << endl;
    return 1;
}

int b = log_moves();

Move Charge = {"Charge", NORMAL, 40, 100, 40, 40};


int log_pokemons(){
    cout << "Initialisation des attaques réussi !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Création des pokémons en cours :" << endl;
    return 1;
}

int c = log_pokemons();

Pokemon Darkrai = Pokemon(1, "Darkrai", TENEBRES, 250, 250, {Charge}, false);
Pokemon Keunotor = Pokemon(1, "Keunotor", NORMAL, 250, 250, {Charge}, false);
Pokemon Racaillou = Pokemon(1, "Racaillou", ROCHE, 250, 250, {Charge}, false);
Pokemon Wailmer = Pokemon(1, "Wailmer", EAU, 250, 250, {Charge}, false);
Pokemon HoOh = Pokemon(1, "Ho-Oh", VOL, 250, 250, {Charge}, false);
Pokemon Blizzi = Pokemon(1, "Blizzi", GLACE, 250, 250, {Charge}, false);

int log_locations(){
    cout << "Tous les pokemons sont nés !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Exploration de la région Hoenn :" << endl;
    return 1;
}

int d = log_locations();

Location Plaine = Location("Plaine", {Darkrai, Keunotor});
Location Montagne = Location("Montagne", {Darkrai, Racaillou});
Location Grotte = Location("Grotte", {Darkrai, Blizzi});
Location Ocean = Location("Ocean", {Darkrai, Wailmer});
Location Ciel = Location("Ciel", {Darkrai, HoOh});

int log_end(){
    cout << "Vous avez découvert le monde Hoenn !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Initialisation terminée, amusez vous bien !" << endl;
    cout << "\n" << endl;
    return 1;
}

int e = log_end();