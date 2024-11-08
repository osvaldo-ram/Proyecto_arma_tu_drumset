#include<iostream>
using namespace std;
class cymbals {
    public:
    string marca;
    string tipo;
    string gama;
    int precio;
   
    
    cymbals(string _marca, string _tipo, string _gama, int _precio){
        marca=_marca;
        tipo=_tipo;
        gama=_gama;
        precio=_precio;
    }
    void info(){
        cout<< "La marca es " << marca  <<"\n";
        cout<< "El tipo es " << tipo  <<"\n";
        cout<< "La gama es " << gama  <<"\n";
        cout<< "El precio es " << precio  <<"\n";
    }
};
    
class drumheads {
    public:
    string marca;
    string genero;
    string durabilidad;
    int precio;
    
    
    drumheads(string _marca, string _genero, string _durabilidad, int _precio){
        marca=_marca;
        genero=_genero;
        durabilidad=_durabilidad;
        precio=_precio;
    }
    void info(){
        cout<< "La marca es " << marca  <<"\n";
        cout<< "El genero es " << genero  <<"\n";
        cout<< "La durabilidad es " << durabilidad  <<"\n";
        cout<< "El precio es " << precio  <<"\n";
    }
};
class drums {
    public:
    string marca;
    string gama;
    string madera;
    int precio;
    
    
    drums(string _marca, string _gama, string _madera, int _precio){
        marca=_marca;
        gama=_gama;
        madera=_madera;
        precio=_precio;
    }
    void info(){
        cout<< "La marca es " << marca  <<"\n";
        cout<< "La gama es " << gama  <<"\n";
        cout<< "La madera es " << madera  <<"\n";
        cout<< "El precio es " << precio  <<"\n";
    }
};
int main()
{
    cymbals c1("zildjian","crash","alta",7000);
    c1.info();

    drumheads c2("evans","rock","alta",500);
    c2.info();

    drums c3("tama","alta","maple",50000);
    c3.info();

    return 0;
}
