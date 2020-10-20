#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED
#include "Computadora.h"

class Laboratorio
{
    Computadora arreglo [5];
    size_t cont;
public :
    Laboratorio();
    void agregarComputadora(const Computadora &p);
    void mostrar();

};

#endif // LABORATORIO_H_INCLUDED
