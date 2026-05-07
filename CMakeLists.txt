cmake_minimum_required(VERSION 4.1.2)
project(Ajedrez)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ajedrez
        main.cpp
        constantes.h
        utilidades.h
        utilidades.cpp
        tablero.cpp
        tablero.h
)
