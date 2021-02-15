//
// Created by notitou on 15/02/2021.
//

#include "pokemonTypes.h"

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