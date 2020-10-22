#include <iostream>
#include "Laboratorio.h"
#include "Computadora.h"
Computadora::Computadora()
{

}

Computadora::Computadora(const string &modelo,
                const string &marca,
                const string &procesador,
                int ram)
{
    this->modelo = modelo;
    this->marca = marca;
    this->procesador = procesador;
    this->ram = ram;
}

void Computadora::set_modelo(const string &valor)
{
    modelo = valor;
}
string Computadora::get_modelo()
{
    return modelo;
}
void Computadora::set_marca(const string &valor)
{
    marca = valor;
}
string Computadora::get_marca()
{
    return marca;
}
void Computadora::set_procesador(const string &valor)
{
    procesador = valor;
}
string Computadora::get_procesador()
{
    return procesador;
}
void Computadora::set_ram(const int &valor)
{
    ram = valor;
}
int Computadora::get_ram()
{
    return ram;
}
