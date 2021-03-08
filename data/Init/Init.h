//
// Created by antoi on 23/02/2021.
//

#ifndef POKEMONCPP_INIT_H
#define POKEMONCPP_INIT_H


#include "../../Classes/PokemonType/PokemonType.h"
#include "../../Classes/Move/Move.h"
#include "../../Classes/Pokemon/Pokemon.h"
#include "../../Classes/EnumLocation/Location.h"
#include "../../Classes/Items/Pokeballs/Pokeball/Pokeball.h"
#include "../../Classes/Items/Potions/Potion/Potion.h"
#include "../../Classes/Items/Potions/SuperPotion/SuperPotion.h"
#include "../../Classes/Items/Potions/HyperPotion/HyperPotion.h"
#include "../../Classes/Items/Potions/PotionMax/PotionMax.h"
#include "../../Classes/Items/Pokeballs/SuperBall/Superball.h"
#include "../../Classes/Items/Pokeballs/Hyperball/Hyperball.h"
#include "../../Classes/Building/PokemonCenter/PokemonCenter.h"
#include "../../Classes/Game/Game.h"

// Extern des pokemon type
// -----------------------------

extern PokemonType ACIER;
extern PokemonType COMBAT;
extern PokemonType DRAGON;
extern PokemonType EAU;
extern PokemonType ELECTRIK;
extern PokemonType FEE;
extern PokemonType FEU;
extern PokemonType GLACE;
extern PokemonType INSECTE;
extern PokemonType NORMAL;
extern PokemonType PLANTE;
extern PokemonType POISON;
extern PokemonType PSY;
extern PokemonType ROCHE;
extern PokemonType SOL;
extern PokemonType SPECTRE;
extern PokemonType TENEBRES;
extern PokemonType VOL;

// Extern des moves
// -----------------------------

// Attaque Acier
extern Move TeteDeFer;
extern Move QueueDeFer;
extern Move Luminocanon;
extern Move GriffeAcier;

// Attaque Combat
extern Move Balayette;
extern Move CasseBrique;
extern Move Aurasphere;
extern Move Exploforce;

// Attaque Dragon
extern Move Colere;
extern Move DracoGriffe;
extern Move HurleTemps;
extern Move DracoMeteor;

// Attaque Eau
extern Move PistoletAO;
extern Move Surf;
extern Move Cascade;
extern Move Hydrocanon;

// Attaque Electrik
extern Move Eclair;
extern Move Tonnerre;
extern Move FatalFoudre;
extern Move Etincelle;

// Attaque Fee
extern Move VoixEnjoleuse;
extern Move Calinerie;
extern Move EclatMagique;
extern Move PouvoirLunaire;

// Attaque Feu
extern Move Flammeche;
extern Move LanceFlamme;
extern Move RoueDeFeu;
extern Move Deflagration;

// Attaque Glace
extern Move VentGlace;
extern Move LaserGlace;
extern Move Blizzard;
extern Move Avalanche;

// Attaque Insecte
extern Move Taillade;
extern Move Piqure;
extern Move PlaieCroix;
extern Move Bourdon;

// Attaque Normal
extern Move Charge;
extern Move Coupe;
extern Move Ultimawashi;
extern Move GigaImpact;
extern Move ViveAttaque;
extern Move VitesseExtreme;

// Attaque Plante
extern Move TranchHerbe;
extern Move FouetLianes;
extern Move LameFeuille;
extern Move TempeteVerte;

// Attaque Poison
extern Move DardVenin;
extern Move BombeBeurk;
extern Move DirectToxik;
extern Move Detritus;

// Attaque Psy
extern Move ChocMental;
extern Move RafalePsy;
extern Move Psyko;
extern Move PsykoudBoul;

// Attaque Roche
extern Move JetPierres;
extern Move Tomberoche;
extern Move PouvoirAntique;
extern Move LameDeRoc;

// Attaque Sol
extern Move Pietisol;
extern Move Seisme;
extern Move TirDeBoue;
extern Move Telluriforce;

// Attaque Spectre
extern Move Etonnement;
extern Move Lechouille;
extern Move BallOmbre;
extern Move VentMauvais;

// Attaque T\202n\212bres
extern Move Assurance;
extern Move Morsure;
extern Move Machouille;
extern Move Vibrobscur;

// Attaque Vol
extern Move Picpic;
extern Move Aeropique;
extern Move Rapace;
extern Move LameDAir;

// Extern des pokemons
// -----------------------------

extern Pokemon Registeel;
extern Pokemon Pachyradjah;
extern Pokemon Hariyama;
extern Pokemon Colossinge;
extern Pokemon Tranchodon;
extern Pokemon Muplodocus;
extern Pokemon Tortank;
extern Pokemon Wailord;
extern Pokemon Raichu;
extern Pokemon Luxrai;
extern Pokemon Melodelfe;
extern Pokemon Nymphali;
extern Pokemon Arcanin;
extern Pokemon Typhlosion;
extern Pokemon Oniglali;
extern Pokemon Polagriffe;
extern Pokemon Scarabrute;
extern Pokemon Melokrik;
extern Pokemon Ronflex;
extern Pokemon Kangourex;
extern Pokemon Majaspic;
extern Pokemon Jungko;
extern Pokemon Grotadmorv;
extern Pokemon Miasmax;
extern Pokemon Mewtwo;
extern Pokemon Alakazam;
extern Pokemon Charkos;
extern Pokemon Gigalithe;
extern Pokemon Groudon;
extern Pokemon Triopikeur;
extern Pokemon Branette;
extern Pokemon Noctunoir;
extern Pokemon Darkrai;
extern Pokemon Absol;
extern Pokemon Roucarnage;
extern Pokemon Boreas;

// Extern des locations
// -----------------------------

extern Location Plaine;
extern Location Ocean;
extern Location Grotte;
extern Location Montagne;
extern Location Ciel;
extern Location Foret;
extern Location Marais;

// Extern Items
// -----------------------------

extern Pokeball PokeBall;
extern Superball SuperBall;
extern Hyperball HyperBall;

extern Potion PotionItem;
extern SuperPotion SuperPotionItem;
extern HyperPotion HyperPotionItem;
extern PotionMax PotionMaxItem;

// Extern Trainer
// -----------------------------

extern Trainer Sascha;

// Extern PokemonCenter
// -----------------------------

extern PokemonCenter pokemonCenter;

// Extern Game
// -----------------------------

extern Game pokemonCPP;
#endif //POKEMONCPP_INIT_H
