cmake_minimum_required(VERSION 3.15)
project(Jungle)

set(CMAKE_CXX_STANDARD 14)

add_executable(Jungle main.cpp Animal.cpp Animal.h WildAnimal.cpp WildAnimal.h DomesticAnimal.cpp DomesticAnimal.h Jungle.cpp Jungle.h Pet.cpp Pet.h)