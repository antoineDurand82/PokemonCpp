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
PokemonType PSY = {"PSY", {"PSY", "ACIER"}, {"COMBAT", "POISON"}, {"TENEBRES"}, {"INSECTE", "TENEBRES", "SPECTRE"}, {"COMBAT", "PSY"}, {}};
PokemonType ROCHE = {"ROCHE", {"COMBAT", "FEU", "VOL", "GLACE"}, {"INSECTE", "FEU", "VOL", "GLACE"}, {}, {"COMBAT", "PLANTE", "SOL", "ACIER", "EAU"}, {"FEU", "VOL", "NORMAL", "POISON"}, {}};
PokemonType SOL = {"SOL", {"INSECTE", "PLANTE"}, {"ELECTRIK", "FEU", "POISON", "ROCHE", "ACIER"}, {"VOL"}, {"PLANTE", "GLACE", "WATER"}, {"POISON", "ROCHE"}, {"ELECTRIK"}};
PokemonType SPECTRE = {"SPECTRE", {"TENEBRES"}, {"SPECTRE", "PSY"}, {"NORMAL"}, {"TENEBRES", "SPECTRE"}, {"INSECTE", "POISON"}, {"COMBAT", "NORMAL"}};
PokemonType TENEBRES = {"TENEBRES", {"TENEBRES", "FEE", "COMBAT"}, {"SPECTRE", "PSY"}, {}, {"INSECTE", "FEE", "COMBAT"}, {"TENEBRES", "SPECTRE"}, {"PSY"}};
PokemonType VOL = {"VOL", {"ELECTRIK", "ROCHE", "ACIER"}, {"INSECTE", "COMBAT", "PLANTE"}, {}, {"ELECTRIK", "GLACE", "ROCHE"}, {"INSECTE", "COMBAT", "PLANTE"}, {"SOL"}};

int log_moves(){
    cout << "Initialisation des types r\202ussi !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Initialisation des attaques en cours :" << endl;
    return 1;
}

int b = log_moves();

// Attaque Acier
Move TeteDeFer = {"T\210te de fer", ACIER, 80, 100, 15, 15};
Move QueueDeFer = {"Queue de fer", ACIER, 100, 75, 15, 15};
Move Luminocanon = {"Luminocanon", ACIER, 80, 100, 10, 10};
Move GriffeAcier = {"Griffe Acier", ACIER, 50, 95, 35, 35};

// Attaque Combat
Move Balayette = {"Balayette", COMBAT, 65, 100, 20, 20};
Move CasseBrique = {"Casse-Brique", COMBAT, 75, 100, 15, 15};
Move Aurasphere = {"Aurasph\212re", COMBAT, 80, 100, 20, 20};
Move Exploforce = {"Exploforce", COMBAT, 120, 70, 5, 5};

// Attaque Dragon
Move Colere = {"Col\212re", DRAGON, 120, 100, 10, 10};
Move DracoGriffe = {"Draco-Griffe", DRAGON, 80, 100, 15, 15};
Move HurleTemps = {"Hurle-Temps", DRAGON, 150, 90, 5, 5};
Move DracoMeteor = {"Draco-M\202t\202ore", DRAGON, 130, 90, 5, 5};

// Attaque Eau
Move PistoletAO = {"Pistolet \205 O", EAU, 40, 100, 25, 25};
Move Surf = {"Surf", EAU, 90, 100, 15, 15};
Move Cascade = {"Cascade", EAU, 80, 100, 15, 15};
Move Hydrocanon = {"Hydrocanon", EAU, 110, 80, 5, 5};

// Attaque Electrik
Move Eclair = {"\220clair", ELECTRIK, 40, 100, 30, 30};
Move Tonnerre = {"Tonnerre", ELECTRIK, 90, 100, 15, 15};
Move FatalFoudre = {"Fatal-Foudre", ELECTRIK, 110, 70, 10, 10};
Move Etincelle = {"\220tincelle", ELECTRIK, 120, 100, 15, 15};

// Attaque Fee
Move VoixEnjoleuse = {"Voix enj\223leuse", FEE, 40, 100, 15, 15};
Move Calinerie = {"C\210linerie", FEE, 90, 90, 10, 10};
Move EclatMagique = {"\220clat Magique", FEE, 80, 100, 10, 10};
Move PouvoirLunaire = {"Pouvoir Lunaire", FEE, 95, 100, 15, 15};

// Attaque Feu
Move Flammeche = {"Flamm\212che", FEU, 40, 100, 25, 25};
Move LanceFlamme = {"Lance-Flamme", FEU, 90, 100, 15, 15};
Move RoueDeFeu = {"Roue de Feu", FEU, 60, 100, 25, 25};
Move Deflagration = {"D\202flagration", FEU, 110, 85, 5, 5};

// Attaque Glace
Move VentGlace = {"Vent Glac\202", GLACE, 55, 95, 15, 15};
Move LaserGlace = {"Laser Glace", GLACE, 90, 100, 10, 10};
Move Blizzard = {"Blizzard", GLACE, 110, 70, 5, 5};
Move Avalanche = {"Avalanche", GLACE, 60, 100, 10, 10};

// Attaque Insecte
Move Taillade = {"Taillade", INSECTE, 40, 95, 20, 20};
Move Piqure = {"Piq\226re", INSECTE, 60, 100, 20, 20};
Move PlaieCroix = {"Plaie Croix", INSECTE, 80, 100, 15, 15};
Move Bourdon = {"Bourdon", INSECTE, 90, 100, 10, 10};

// Attaque Normal
Move Charge = {"Charge", NORMAL, 40, 100, 40, 40};
Move Coupe = {"Coupe", NORMAL, 50, 95, 30, 30};
Move Ultimawashi = {"Ultimawashi", NORMAL, 120, 75, 5, 5};
Move GigaImpact = {"Giga Impact", NORMAL, 150, 90, 5, 5};
Move ViveAttaque = {"Vive-Attaque", NORMAL, 40, 100, 30, 30};
Move VitesseExtreme = {"Vitesse-\322xtreme", NORMAL, 80, 100, 5, 5};

// Attaque Plante
Move TranchHerbe = {"Tranch'Herbe", PLANTE, 55, 95, 25, 25};
Move FouetLianes = {"Fouet-Lianes", PLANTE, 45, 100, 25, 25};
Move LameFeuille = {"Lame Feuille", PLANTE, 90, 100, 15, 15};
Move TempeteVerte = {"Temp\210te Verte", PLANTE, 130, 90, 5, 5};

// Attaque Poison
Move DardVenin = {"Dard-Venin", POISON, 15, 100, 35, 35};
Move BombeBeurk = {"Bombe Beurk", POISON, 90, 100, 10, 10};
Move DirectToxik = {"Direct Toxik", POISON, 80, 100, 20, 20};
Move Detritus = {"D\202tritus", POISON, 65, 100, 20, 20};

// Attaque Psy
Move ChocMental = {"Choc Mental", PSY, 50, 100, 25, 25};
Move RafalePsy = {"Rafale Psy", PSY, 65, 100, 20, 20};
Move Psyko = {"Psyko", PSY, 90, 100, 10, 10};
Move PsykoudBoul = {"Psykoud'Boul", PSY, 80, 90, 15, 15};

// Attaque Roche
Move JetPierres = {"Jet-Pierres", ROCHE, 50, 90, 15, 15};
Move Tomberoche = {"Tomberoche", ROCHE, 60, 95, 15, 15};
Move PouvoirAntique = {"Pouvoir Antique", ROCHE, 60, 100, 5, 5};
Move LameDeRoc = {"Lame de Roc", ROCHE, 100, 80, 5, 5};

// Attaque Sol
Move Pietisol = {"Pi\202tisol", SOL, 60, 100, 20, 20};
Move Seisme = {"S\202isme", SOL, 100, 100, 10, 10};
Move TirDeBoue = {"Tir de Boue", SOL, 55, 95, 15, 15};
Move Telluriforce = {"Telluriforce", SOL, 90, 100, 10, 10};

// Attaque Spectre
Move Etonnement = {"\220tonnement", SPECTRE, 30, 100, 15, 15};
Move Lechouille = {"L\202chouille", SPECTRE, 30, 100, 30, 30};
Move BallOmbre = {"Ball'Ombre", SPECTRE, 80, 100, 15, 15};
Move VentMauvais = {"Vent Mauvais", SPECTRE, 60, 100, 5, 5};

// Attaque T\202n\212bres
Move Assurance = {"Assurance", TENEBRES, 60, 100, 10, 10};
Move Morsure = {"Morsure", TENEBRES, 60, 100, 25, 25};
Move Machouille = {"M\203chouille", TENEBRES, 80, 100, 15, 15};
Move Vibrobscur = {"Vibrobscur", TENEBRES, 80, 100, 15, 15};

// Move Vol
Move Picpic = {"Picpic", VOL, 35, 100, 35, 35};
Move Aeropique = {"A\202ropique", VOL, 60, 100, 20, 20};
Move Rapace = {"Rapace", VOL, 120, 100, 15, 15};
Move LameDAir = {"Lame d'Air", VOL, 75, 95, 15, 15};


int log_pokemons(){
    cout << "Initialisation des attaques r\202ussi !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Cr\202ation des pok\202mons en cours :" << endl;
    return 1;
}

int c = log_pokemons();


// Pokemon Acier

Pokemon Registeel = {2, "Registeel", ACIER, 250, 250, {Charge, GriffeAcier, Luminocanon}, false};
Pokemon Pachyradjah = {3, "Pachyradjah", ACIER, 250, 250, {Charge, TeteDeFer, QueueDeFer}, false};

// Pokemon Combat

Pokemon Hariyama = {4, "Hariyama", COMBAT, 250, 250, {GigaImpact, CasseBrique, Balayette}, false};
Pokemon Colossinge = {5, "Colossinge", COMBAT, 250, 250,  {Exploforce, Ultimawashi, Charge, Aurasphere}, false};

// Pok\202mon Dragon

Pokemon Tranchodon = {6, "Trachodon", DRAGON, 250, 250, {Coupe, DracoGriffe, Colere, Charge}, false};
Pokemon Muplodocus = {7, "Muplodocus", DRAGON, 250, 250, {PistoletAO, HurleTemps, DracoMeteor, Hydrocanon}, false};

// Pok\202mon Eau

Pokemon Tortank = {8, "Tortank", EAU, 250, 250, {Charge, Surf, Cascade, Hydrocanon}, false};
Pokemon Wailord = {9, "Wailord", EAU, 300, 300, {Charge, PistoletAO, Surf, Cascade}, false};

// Pokemon Electrik

Pokemon Raichu = {10, "Raichu", ELECTRIK, 150, 150, {Charge, ViveAttaque, Tonnerre, Eclair}, false};
Pokemon Luxrai = {11, "Luxrai", ELECTRIK, 200, 200, {Charge, Etincelle, FatalFoudre, Tonnerre}, false};

// Pokemon Fee

Pokemon Melodelfe = {12, "M\202lodelfe", FEE, 250, 250, {VoixEnjoleuse, EclatMagique, Charge, Calinerie}, false};
Pokemon Nymphali = {13, "Nymphali", FEE, 150, 150, {Calinerie, VoixEnjoleuse, EclatMagique, PouvoirLunaire}, false};

// Pokemon Feu

Pokemon Arcanin = {14, "Arcanin", FEU, 250, 250, {Flammeche, LanceFlamme, VitesseExtreme, Deflagration}, false};
Pokemon Typhlosion = {15, "Typhlosion", FEU, 200, 200, {RoueDeFeu, Charge, Deflagration, LanceFlamme}, false};

// Pokemon Glace

Pokemon Oniglali = {16, "Oniglali", GLACE, 150, 150, {Charge, VentGlace, LaserGlace}, false};
Pokemon Polagriffe = {17, "Polagriffe", GLACE, 200, 200, {Charge, Coupe, Blizzard, Avalanche}, false};

// Pokemon Insecte

Pokemon Scarabrute = {18, "Scarabrute", INSECTE, 200, 200, {Taillade, Piqure, PlaieCroix, Coupe}, false};
Pokemon Melokrik = {19, "M\202lokrik", INSECTE, 100, 100, {Taillade, Bourdon, Piqure, Coupe}, false};

// Pokemon Normal

Pokemon Ronflex = {20, "Ronflex", NORMAL, 300, 300, {Charge, GigaImpact, Tonnerre, Ultimawashi}, false};
Pokemon Kangourex = {21, "Kangourex", NORMAL, 250, 250, {Ultimawashi, GigaImpact, LaserGlace, Tonnerre}, false};

// Pokemon Plante

Pokemon Majaspic = {22, "Majaspic", PLANTE, 250, 250, {FouetLianes, TempeteVerte, Charge, Aeropique}, false};
Pokemon Jungko = {23, "Jungko", PLANTE, 200, 200, {LameFeuille, TranchHerbe, TempeteVerte, Charge}, false};

// Pokemon Poison

Pokemon Grotadmorv = {24, "Grotadmorv", POISON, 200, 200, {BombeBeurk, Detritus, Charge, DirectToxik}, false};
Pokemon Miasmax = {25, "Miasmax", POISON, 150, 150, {DardVenin, BombeBeurk, Detritus, Charge}, false};

// Pokemon Psy

Pokemon Mewtwo = {26, "Mewtwo", PSY, 300, 300, {Psyko, RafalePsy, ChocMental, Tonnerre}, false};
Pokemon Alakazam = {27, "Alakazam", PSY, 200, 200, {Psyko, PsykoudBoul, RafalePsy, Charge}, false};

// Pokemon Roche

Pokemon Charkos = {28, "Charkos", ROCHE, 200, 200, {JetPierres, Tomberoche, PouvoirAntique, LameDeRoc}, false};
Pokemon Gigalithe = {29, "Gigalithe", ROCHE, 250, 250, {Seisme, LameDeRoc, Tomberoche, PouvoirAntique}, false};

// Pokemon Sol

Pokemon Groudon = {30, "Groudon", SOL, 300, 300, {Seisme, LanceFlamme, Pietisol, Deflagration}, false};
Pokemon Triopikeur = {31, "Triopikeur", SOL, 150, 150, {TirDeBoue, Telluriforce, Seisme, Pietisol}, false};

// pokemon Spectre

Pokemon Branette = {32, "Branette", SPECTRE, 150, 150, {BallOmbre, Etonnement, Lechouille, Psyko}, false};
Pokemon Noctunoir = {33, "Noctunoir", SPECTRE, 200, 200, {BallOmbre, VentMauvais, Assurance, Vibrobscur}, false};

//Pokemon Tenebres

Pokemon Darkrai = {1, "Darkrai", TENEBRES, 250, 250, {ViveAttaque, Vibrobscur, Assurance, VentMauvais}, false};
Pokemon Absol = {34, "Absol", TENEBRES, 200, 200, {Morsure, Machouille, Vibrobscur, ViveAttaque}, false};

// Pokemon Vol

Pokemon Boreas = {35, "Bor\202as", VOL, 300, 300, {Aeropique, LameDAir, FatalFoudre, Charge}, false};
Pokemon Roucarnage = {36, "Roucarnage", VOL, 200, 200, {Picpic, Aeropique, Rapace, LameDAir}, false};

int log_items(){
    cout << "Tous les pok\202mons sont n\202s !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Cr\202ation Items :" << endl;
    return 1;
}

int d = log_items();

Pokeball PokeBall = {1, "Pokeball", 200, 40, "ball"};
Superball SuperBall = {2, "SuperBall", 600, 60, "ball"};
Hyperball HyperBall = {3, "HyperBall", 1200, 80, "ball"};

Potion PotionItem = {1, "Potion", 300, "potion", 20};
SuperPotion SuperPotionItem = {2, "Super Potion", 700, "potion", 50};
HyperPotion HyperPotionItem = {3, "Hyper Potion", 1200, "potion", 120};
PotionMax PotionMaxItem = {4, "Potion Max", 2500, "potion", 999};

int log_locations(){
    cout << "Tous les items sont cr\202\202s !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Exploration de la r\202gion Hoenn :" << endl;
    return 1;
}

int e = log_locations();

Location Plaine = {"Plaine", {Majaspic, Arcanin, Absol, Alakazam, Pachyradjah, Luxrai, Typhlosion}};
Location Montagne = {"Montagne", {Charkos, Gigalithe, Tranchodon, Polagriffe, Oniglali, Ronflex, Melodelfe}};
Location Grotte = {"Grotte", {Darkrai, Registeel, Triopikeur, Groudon, Noctunoir, Branette, Hariyama}};
Location Ocean = {"Ocean", {Tortank, Wailord}};
Location Ciel = {"Ciel", {Boreas, Roucarnage, Mewtwo}};
Location Foret = {"For\210t", {Melokrik, Colossinge, Raichu, Nymphali, Scarabrute}};
Location Marais = {"Marais", {Miasmax, Grotadmorv, Jungko, Kangourex, Muplodocus}};

int log_world(){
    cout << "D\202couverte du monde Hoenn compl\212te!" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Gestation de votre personne en cours !" << endl;
    return 1;
}

int f = log_world();


Trainer Sacha = {1,  "sacha", {Darkrai, Tortank, Charkos, Branette, Muplodocus},
                 {Registeel, Arcanin}, 5000, {HyperPotionItem, PotionMaxItem},
                 {PokeBall, HyperBall}};


int log_trainer(){
    cout << "Vous venez de na\214tre !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Construction des b\203timents." << endl;
    return 1;
}

int g = log_trainer();

PokemonCenter pokemonCenter = {1, "Centre"};
Shop shop = {1, "shop", {PokeBall, SuperBall, HyperBall}, {PotionItem, SuperPotionItem, HyperPotionItem, PotionMaxItem}};

int log_pokemonCenter(){
    cout << "Les b\203timents sont sortis du sol !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Lancement de la vie et de la partie sous-peu." << endl;
    return 1;
}

int h = log_pokemonCenter();

Game pokemonCPP = {Sacha, pokemonCenter, shop};

int log_end(){
    cout << "La vie vient de d\202marer !" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\n" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Initialisation termin\202e, amusez vous bien !" << endl;
    cout << "\n" << endl;
    cout << "\n" << endl;
    return 1;
}

int i = log_end();


