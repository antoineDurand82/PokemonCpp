cmake_minimum_required(VERSION 3.17)
project(PokemonCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(PokemonCpp main.cpp Classes/Pokemon/Pokemon.cpp Classes/Pokemon/Pokemon.h Classes/Move/Move.cpp Classes/Move/Move.h Classes/PokemonType/PokemonType.cpp Classes/PokemonType/PokemonType.h)