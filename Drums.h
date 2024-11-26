#ifndef DRUMS_H
#define DRUMS_H
#include<iostream>
#include "Instrument.h"
class drums : public instrument {
    private:
        
        string madera;

    public:
        drums(string _marca, string _madera, string _gama, int _precio) : instrument(_marca, _precio,_gama), madera(_madera) {}

        void info() const override {
            cout << "La marca de los drums es " << getMarca() << "\n";
            cout << "La gama de los drums es " << getGama() << "\n";
            cout << "La madera de los drums es " << madera << "\n";
            cout << "El precio de los drums es " << getPrecio() << "\n";
        }
};
#endif