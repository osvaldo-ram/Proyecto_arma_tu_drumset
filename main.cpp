//Jesús Osvaldo Ramos Pérez A01713833

#include<iostream>
#include "Cymbals.h"
#include "Drumheads.h"
#include "Drums.h"
#include "Drumset.h"

using namespace std;


int main() {
    drumset mibateria;
    int opciones;
    string marca,set,gama,madera,genero,durabilidad;
    int precio=0;
    while (true){
        cout<<"Bienvenido al armador de bateria, con que quieres iniciar? \n 1.Cymbals \n 2.Drumheads \n 3.Drums \n 4.Mostrar bateria \n 5.Salir"<<"\n";
        cin>>opciones;
        switch(opciones){
            case 1:
                cout<<"Elige tu marca de cymbals   \n";
                cout<<" Paiste \n Zildjian \n Meinl \n Sabian \n Owl \n ";
                cin>> marca;
                cout<<"Elige tu set de cymbals \n";
                cout<<" Bright \n Dark \n Hybrid \n";
                cin>>set;
                cout<<"Elige tu gama de cymbals \n";
                cout<<" Alta \n Media \n Baja \n";
                cin>> gama;
                mibateria.agregarpieza(new cymbals(marca,set,gama, precio));
                break;
            case 2:
                cout<<"Elige set de drumheads de tu marca favorita \n";
                cout<<" Evans \n Remo \n Aquarian \n  ";
                cin>> marca;
                cout<<"Elige tu genero de drumheads \n";
                cout<<" Rock \n Jazz \n Pop \n Metal \n ";
                cin>> genero;
                 cout<<"Elige tu gama de tus drumheads \n";
                cout<<" Alta \n Media \n Baja \n";
                cin>> gama;
                cout<<"Elige la durabilidad de tus drumheads \n";
                cout<<" Alta \n Media \n Baja \n";
                cin>> durabilidad;
                mibateria.agregarpieza(new drumheads(marca,gama,genero, durabilidad, precio ));
                break;
            case 3:
                cout<<"Elige tus drums de tu marca favorita \n";
                cout<<" Tama \n Pearl \n Mapex \n Ludwig \n ";
                cin>>marca;
                cout<<"Elige la madera de tus drums \n";
                cout<<" Maple \n Cherry \n Caoba \n";
                cin>>madera;
                cout<<"Elige tu gama de drums \n";
                cout<<" Alta \n Media \n Bajo \n";
                mibateria.agregarpieza(new drums(marca, madera, gama , precio));
                break;
            case 4:
                cout<<"Tu drum set es \n";
                mibateria.mostrarbateria();
                break;
            case 5:
                cout<<"Adios...";
                return 0;
            default:
                cout<<"opcion no valida. Intente nuevamente \n";
                break;
        }
    }   
}