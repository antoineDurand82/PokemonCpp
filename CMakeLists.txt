cmake_minimum_required(VERSION 3.17)
project(PokemonCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(PokemonCpp main.cpp Classes/Pokemon/Pokemon.cpp Classes/Pokemon/Pokemon.h Classes/Move/Move.cpp Classes/Move/Move.h Classes/PokemonType/PokemonType.cpp Classes/PokemonType/PokemonType.h Classes/Trainer/Trainer.cpp Classes/Trainer/Trainer.h Classes/Item/Item.cpp Classes/Item/Item.h Classes/EnumLocation/Location.cpp Classes/EnumLocation/Location.h data/Init/Init.cpp data/Init/Init.h Classes/Building/Building.cpp Classes/Building/Building.h Classes/Building/PokemonCenter/PokemonCenter.cpp Classes/Building/PokemonCenter/PokemonCenter.h Classes/Building/Shop/Shop.cpp Classes/Building/Shop/Shop.h)