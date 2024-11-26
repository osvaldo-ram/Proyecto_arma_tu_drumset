#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include<iostream>
#include<string>
using namespace std;

class instrument {
    private:
        string marca;
        string gama;
        int precio;
    
    public:
        instrument(string _marca, int _precio, string _gama): marca(_marca), precio(_precio),gama(_gama) {setPrecio(_precio);}
        
        string getMarca() const {
            return marca;
        }
        string getGama() const {
            return gama;
        }
        int getPrecio() const {
            return precio;
        }

        void setPrecio(int _precio) {
            if (_precio > 0) {
                precio = _precio;
            }
            else {
                if (marca=="Paiste" && gama=="Baja") precio=15000;
                else if (marca=="Paiste" && gama=="Media") precio=22000;
                else if (marca=="Paiste" && gama=="Alta") precio=32000;
                else if (marca=="Zildjian" && gama=="Baja") precio=16000;
                else if (marca=="Zildjian" && gama=="Media") precio=20000;
                else if (marca=="Zildjian" && gama=="Alta") precio=38000;
                else if (marca=="Meinl" && gama=="Baja") precio=10000;
                else if (marca=="Meinl" && gama=="Media") precio=24000;
                else if (marca=="Meinl" && gama=="Alta") precio=40000;
                else if (marca=="Sabian" && gama=="Baja") precio=10000;
                else if (marca=="Sabian" && gama=="Media") precio=170000;
                else if (marca=="Sabian" && gama=="Alta") precio=30000;
                else if (marca=="Owl" && gama=="Baja") precio=10000;
                else if (marca=="Owl" && gama=="Media") precio=15000;
                else if (marca=="Owl" && gama=="Alta") precio=20000;
                else if (marca=="Evans" && gama=="Baja") precio=1000;
                else if (marca=="Evans" && gama=="Media") precio=1500;
                else if (marca=="Evans" && gama=="Alta") precio=2000;
                else if (marca=="Remo" && gama=="Baja") precio=800;
                else if (marca=="Remo" && gama=="Media") precio=1500;
                else if (marca=="Remo" && gama=="Alta") precio=2500;
                else if (marca=="Aquarian" && gama=="Baja") precio=600;
                else if (marca=="Aquarian" && gama=="Media") precio=900;
                else if (marca=="Aquarian" && gama=="Alta") precio=1600;
                else if (marca=="Tama" && gama=="Baja") precio=23000;
                else if (marca=="Tama" && gama=="Media") precio=60000;
                else if (marca=="Tama" && gama=="Alta") precio=130000;
                 else if (marca=="Pearl" && gama=="Baja") precio=20000;
                else if (marca=="Pearl" && gama=="Media") precio=40000;
                else if (marca=="Pearl" && gama=="Alta") precio=150000;
                 else if (marca=="Mapex" && gama=="Baja") precio=21000;
                else if (marca=="Mapex" && gama=="Media") precio=50000;
                else if (marca=="Mapex" && gama=="Alta") precio=130000;
                 else if (marca=="Ludwig" && gama=="Baja") precio=30000;
                else if (marca=="Ludwig" && gama=="Media") precio=50000;
                else if (marca=="Ludwig" && gama=="Alta") precio=100000;
                 
                else precio=0;


            }
        }

        virtual void info() const = 0;
};
#endif