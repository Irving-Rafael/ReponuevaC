#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED
#include "Computadora.h"
#include <iostream>
#include <fstream>

class Laboratorio
{
    Computadora arreglo [5];
    size_t cont;
public :
    Laboratorio();
    void agregarComputadora(const Computadora &p);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &v, const Computadora &p)
    {
        v.agregarComputadora(p);
        return v;
    }

};

#endif // LABORATORIO_H_INCLUDED
