#include <iostream>
using namespace std;
#include "tablero.h"

#include "constantes.h"


void mostrarInstrucciones() {

    int opcion;

    do {

        cout << "======= INSTRUCCIONES =======" << endl;
        cout << "- Las blancan se mueven primero." << endl;
        cout << "- El juego termina cuando un rey es capturado o un jugador se rinde." << endl;

        cout << endl;
        cout << "1. Volver al menu" << endl;
        cout << "2. Salir del juego" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                break;

            case 2:
                cout << "Gracias por jugar." << endl;
                exit(0);
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                cout << endl;

        }

    } while(opcion != 1);
}
void mostrarIntegrantes() {

    cout << "======== INTEGRANTES ======" << endl;
    cout << "Integrante 1-blancas : " << endl;
    cout << "Integrante 2-blancas : " << endl;
    cout << "Integrante 1-negras : " << endl;
    cout << "Integrante 2-negras : " << endl;

}
void mostrarConsideraciones() {
    cout << "======== CONSIDERACIONES ======" << endl;
}
void jugar() {
    char tablero[8][8];
    string jugador1;
    string jugador2;

    inicializarTablero(tablero);

    cout << "Jugador 1: " << jugador1 << endl;
    cout << "Jugador 2: " << jugador2 << endl;

    imprimirTablero(tablero);
}



int main() {

    int opcion;

    cout << "============================================" << endl;
    cout << "         EL GAMBITO DE UTEC" << endl;
    cout << "       Ajedrez en C++ - Terminal" << endl;
    cout << "    CS1112 Programacion II - 2026-I" << endl;
    cout << "============================================" << endl;

    do {

        cout << "====== MENU PRINCIPAL ======" << endl;
        cout << "  0. Instrucciones" << endl;
        cout << "  1. Integrantes" << endl;
        cout << "  2. Consideraciones" << endl;
        cout << "  3. Jugar" << endl;
        cout << "  4. Salir" << endl;
        cout << "============================" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 0:
                mostrarInstrucciones();
                break;

            case 1:
                mostrarIntegrantes();
                break;

            case 2:
                mostrarConsideraciones();
                break;

            case 3:
                jugar();
                break;

            case 4:
                cout << "¡Hasta la proxima! Gracias por jugar El Gambito de UTEC." << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }

    } while(opcion != 4);

    return 0;
}