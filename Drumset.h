#ifndef DRUMSET_H
#define DRUMSET_H

#include "Instrument.h"
#include<iostream>
class drumset {
    private:
        instrument* piezas[7];
        int contador;

    public:
        drumset() : contador(0) {}

        void agregarpieza(instrument* pieza) {
            if (contador < 7) {
                piezas[contador++] = pieza;
                cout << "Pieza agregada: " << pieza->getMarca() << "\n";
            } else {
                cout << "No se pueden agregar más piezas\n";
            }
        }

        void mostrarbateria() {
            cout << "Tu bateria tiene:\n";
            for (int i = 0; i < contador; ++i) {
                piezas[i]->info();
            }
        }
};
#endif