#ifndef AJEDREZ_PIEZAS_AVANZADAS_H
#define AJEDREZ_PIEZAS_AVANZADAS_H

#include "constantes.h"

// Flags necesarios para cumplir enroque
extern bool reyBlancoMovido;
extern bool reyNegroMovido;
extern bool torreBlancaA_Mov;
extern bool torreBlancaH_Mov;
extern bool torreNegraA_Mov;
extern bool torreNegraH_Mov;

// Movimientos de piezas
bool validarRey (char tab[8][8], int fo, int co, int fd, int cd);
bool validarCaballo (char tab[8][8], int fo, int co, int fd, int cd);
bool validarDama (char tab[8][8], int fo, int co, int fd, int cd);


#endif //AJEDREZ_PIEZAS_AVANZADAS_H