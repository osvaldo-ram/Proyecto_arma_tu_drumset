#ifndef CYMBALS_H
#define CYMBALS_H
#include<iostream>
#include "Instrument.h"

class cymbals : public instrument {
    private:
        string set;

    public:
        cymbals(string _marca, string _set, string _gama, int _precio) : instrument(_marca, _precio,_gama), set(_set) {}

        void info() const override {
            cout << "La marca de cymbals es " << getMarca() << "\n";
            cout << "El set de cymbals es " << set << "\n";
            cout << "La gama de cymbals es " << getGama() << "\n";
            cout << "El precio de cymbals es " << getPrecio() << "\n";
        }
};
#endif