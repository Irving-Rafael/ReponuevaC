#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Computadora
{
    string modelo;
    string marca;
    string procesador;
    int ram;
public:
    Computadora();
    Computadora(const string &modelo,
                const string &marca,
                const string &procesador,
                int ram);

    void set_modelo(const string &v);
    string get_modelo();

    void set_marca(const string &v);
    string get_marca();

    void set_procesador(const string &v);
    string get_procesador();

    void set_ram(const int &v);
    int get_ram();

    friend ostream& operator<<(ostream &out, Computadora &c)
    {
    out<<left;
    out<<setw(30)<<c.modelo;
    out<<setw(17)<<c.marca;
    out<<setw(22)<<c.procesador;
    out<<setw(16)<<c.ram;
    out<<endl;

    return out;
}

friend istream& operator>>(istream &in, Computadora &c)
{
    cout << "Modelo: ";
    getline(cin,c.modelo);
    cout << "marca: ";
    getline(cin,c.marca);
    cout << "Procesador: ";
    getline(cin,c.procesador);
    cout << "Memoria RAM: ";
    cin >> c.ram;


    return in;
}

};

#endif // COMPUTADORA_H_INCLUDED
