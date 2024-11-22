//Jesús Osvaldo Ramos Pérez A01713833

#include<iostream>
using namespace std;

class instrument {
    private:
        string marca;
        int precio;
    
    public:
        instrument(string _marca, int _precio): marca(_marca), precio(_precio) {}
        
        string getMarca() const {
            return marca;
        }

        int getPrecio() const {
            return precio;
        }

        void setPrecio(int _precio) {
            if (_precio > 0) {
                precio = _precio;
            }
        }

        virtual void info() const = 0;
};

class cymbals : public instrument {
    private:
        string tipo;
        string gama;

    public:
        cymbals(string _marca, string _tipo, string _gama, int _precio) : instrument(_marca, _precio), tipo(_tipo), gama(_gama) {}

        void info() const override {
            cout << "La marca de cymbals es " << getMarca() << "\n";
            cout << "El tipo de cymbals es " << tipo << "\n";
            cout << "La gama de cymbals es " << gama << "\n";
            cout << "El precio de cymbals es " << getPrecio() << "\n";
        }
};
class drums : public instrument {
    private:
        string gama;
        string madera;

    public:
        drums(string _marca, string _madera, string _gama, int _precio) : instrument(_marca, _precio), madera(_madera), gama(_gama) {}

        void info() const override {
            cout << "La marca de los drums es " << getMarca() << "\n";
            cout << "La gama de los drums es " << gama << "\n";
            cout << "La madera de los drums es " << madera << "\n";
            cout << "El precio de los drums es " << getPrecio() << "\n";
        }
};
class drumheads : public instrument {
    private:
        string genero;
        string durabilidad;

    public:
        drumheads(string _marca, string _genero, string _durabilidad, int _precio) : instrument(_marca, _precio), genero(_genero), durabilidad(_durabilidad) {}

        void info() const override {
            cout << "La marca de los drumheads es " << getMarca() << "\n";
            cout << "El genero de los drumheads es " << genero << "\n";
            cout << "La durabilidad de los drumheads es " << durabilidad << "\n";
            cout << "El precio de los drumheads es " << getPrecio() << "\n";
        }
};



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

int main() {
    drumset mibateria;

    mibateria.agregarpieza(new cymbals("Zildjian", "Crash", "Alta", 7000));
    mibateria.agregarpieza(new drumheads("Evans", "Rock", "Alta", 500));
    mibateria.agregarpieza(new drums("Tama", "Maple", "Alta", 50000));

    mibateria.mostrarbateria();

    return 0;
}