#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h> // Para sleep en sistemas UNIX (usa Sleep en Windows)
using namespace std;

const int META = 20;

void mostrarTablero(int pos1, int pos2) {
    for (int i = 1; i <= META; i++) {
        if (i == pos1 && i == pos2)
            cout << "[🚗🚙]"; // Ambos jugadores en la misma casilla
        else if (i == pos1)
            cout << "[🚗 ]"; // Jugador 1
        else if (i == pos2)
            cout << "[ 🚙]"; // Jugador 2
        else
            cout << "[   ]";
    }
    cout << endl;
}

int casillaEspecial(int pos) {
    switch (pos) {
        case 5: cout << "¡Casilla 5! Avanzas 2 casillas.\n"; return 2;
        case 9: cout << "¡Casilla 9! Retrocedes 3 casillas.\n"; return -3;
        case 14: cout << "¡Casilla 14! Pierdes el siguiente turno.\n"; return 99;
        case 17: cout << "¡Casilla 17! Avanzas 1 casilla.\n"; return 1;
        default: return 0;
    }
}

int main() {
    srand(time(0));
    int pos1 = 1, pos2 = 1;
    bool turno1 = true, perderTurno1 = false, perderTurno2 = false;

    while (pos1 < META && pos2 < META) {
        mostrarTablero(pos1, pos2);
        if (turno1) {
            if (perderTurno1) {
                cout << "🚗 Jugador 1 pierde el turno.\n";
                perderTurno1 = false;
            } else {
                cout << "🚗 Turno del Jugador 1. Presiona Enter para lanzar el dado...";
                cin.ignore();
                int dado = rand() % 6 + 1;
                cout << "🚗 Sacaste un " << dado << endl;
                pos1 += dado;
                if (pos1 > META) pos1 = META;
                int efecto = casillaEspecial(pos1);
                if (efecto == 99) perderTurno1 = true;
                else pos1 += efecto;
                if (pos1 < 1) pos1 = 1;
                if (pos1 > META) pos1 = META;
            }
        } else {
            if (perderTurno2) {
                cout << "🚙 Jugador 2 pierde el turno.\n";
                perderTurno2 = false;
            } else {
                cout << "🚙 Turno del Jugador 2. Presiona Enter para lanzar el dado...";
                cin.ignore();
                int dado = rand() % 6 + 1;
                cout << "🚙 Sacaste un " << dado << endl;
                pos2 += dado;
                if (pos2 > META) pos2 = META;
                int efecto = casillaEspecial(pos2);
                if (efecto == 99) perderTurno2 = true;
                else pos2 += efecto;
                if (pos2 < 1) pos2 = 1;
                if (pos2 > META) pos2 = META;
            }
        }

        turno1 = !turno1;
        sleep(1); // Espera para mejor visualización
        system("clear"); // Cambia a "cls" si usas Windows
    }

    mostrarTablero(pos1, pos2);
    if (pos1 >= META)
        cout << "🎉 ¡Jugador 1 gana la carrera! 🚗🏁\n";
    else
        cout << "🎉 ¡Jugador 2 gana la carrera! 🚙🏁\n";

    return 0;
}