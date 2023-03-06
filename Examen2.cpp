#include <iostream>
#include <string.h>
#include "../lib/color.h"
using namespace std;
const string FTNOMBRE_COMPLETO="Francisco Javier Torres Negrete";
const string FTCEDULA="1724085996";
int main()
{
    cout<<COLOR_GREEN<< "[+] Leyendo Coordenadas ..."<<endl;
    cout<<COLOR_RED<<">> Error: Cap,Geo,    tipoArsenal -> stoi"<<endl;
    cout<<COLOR_GREEN<<" 100%   0, GPS0,    ab"<<endl;
    cout<<COLOR_GREEN<<" 100%   1, GPS1,    bc"<<endl;
    cout<<COLOR_GREEN<<" 100%   2, GPS2,    ac"<<endl;
    cout<<COLOR_GREEN<<" 100%   4, GPS4,    acd"<<endl;
    cout<<COLOR_GREEN<<" 100%   5, GPS5,    bct"<<endl;
    cout<<COLOR_GREEN<<" 100%   6, GPS6,    act"<<endl;
    cout<<COLOR_GREEN<<" 100%   7, GPS7,    aaabbct"<<endl;
    cout<<COLOR_GREEN<<" 100%   8, GPS8,    abbccdt"<<endl;
    cout<<COLOR_GREEN<<" 100%   9, GPS9,    aaabbcd"<<endl;
    cout<<"\n\n";
    cout<<COLOR_GRAY<<"[+] Informacion Arbol Binario de capacidad belica Ucrania"<<endl;
    cout<<COLOR_GRAY<<"Developer-Nombre : Francisco Javier Torres Negrete"<<endl;
    cout<<COLOR_GRAY<<"Developer-Cedula : 1724085996"<<endl;
    cout<<COLOR_GRAY<<"Capacidad Belica : 42"<<endl;
    cout<<COLOR_GRAY<<"Coordenada-Total : 9"<<endl;
    cout<<COLOR_GRAY<<"Coordenada-SecCarga : 0 1 2 4 5 6 7 8 9"<<endl;
    cout<<"\n\n";
    cout<<COLOR_WHITE<<"[+] ARBOL BINARIO DE COORDENADAS & BOMBA"<<endl;
    cout<<COLOR_BLUE<<"\t\t\t\t\t\t\t\t"<<"GPS9.9"<<COLOR_WHITE<<"{aaabbcd}"<<endl;
    cout<<COLOR_BLUE<<"\t\t\t\t\t\t\t"<<"GPS8.8"<<COLOR_WHITE<<"{abbccdt}"<<endl;
    cout<<COLOR_BLUE<<"\t\t\t\t\t\t"<<"GPS7.7"<<COLOR_WHITE<<"{aaabbct}"<<endl;
    cout<<COLOR_BLUE<<"\t\t\t\t\t"<<"GPS6.6"<<COLOR_WHITE<<"{act}"<<endl;
    cout<<COLOR_BLUE<<"\t\t\t\t"<<"GPS5.5"<<COLOR_WHITE<<"{bct}"<<endl;
    cout<<COLOR_BLUE<<"\t\t\t"<<"GPS4.4"<<COLOR_WHITE<<"{acd}"<<endl;
    cout<<COLOR_BLUE<<"\t\t"<<"GPS2.2"<<COLOR_WHITE<<"{ac}"<<endl;
    cout<<COLOR_BLUE<<"\t"<<"GPS1.1"<<COLOR_WHITE<<"{bc}"<<endl;
    cout<<COLOR_BLUE<<"GPS0.0"<<COLOR_WHITE<<"{ab}"<<endl;
}   
