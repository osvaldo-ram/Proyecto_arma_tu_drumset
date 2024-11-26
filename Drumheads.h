#ifndef DRUMHEADS_H
#define DRUMHEADS_H
#include<iostream>
#include "Instrument.h"
class drumheads : public instrument {
    private:
        string genero;
        string durabilidad;

    public:
        drumheads(string _marca,string _gama, string _genero, string _durabilidad, int _precio) : instrument(_marca, _precio,_gama), genero(_genero), durabilidad(_durabilidad) {}

        void info() const override {
            cout << "La marca de los drumheads es " << getMarca() << "\n";
            cout << "La gama de los drumheads es " << getGama() << "\n";
            cout << "El genero de los drumheads es " << genero << "\n";
            cout << "La durabilidad de los drumheads es " << durabilidad << "\n";
            cout << "El precio de los drumheads es " << getPrecio() << "\n";
            
        }
};
#endif
