cmake_minimum_required(VERSION 3.20)
project(Pila_Interfaz)

set(CMAKE_CXX_STANDARD 14)

add_executable(Pila_Interfaz main.cpp RuntimeException.h Pila.cpp Pila.h PilaInterfaz.h)
