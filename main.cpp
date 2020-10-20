#include <iostream>
#include "Computadora.h"
#include "Laboratorio.h"


using namespace std;
int main()
{

    Computadora a = Computadora();
    a.set_modelo("Inspiron");
    a.set_marca("DELL");
    a.set_procesador("Intel");
    a.set_ram(12);
    Laboratorio lb;

    Computadora b = ("All-One","hp","AMD",6);

    lb.agregarComputadora(a);

    lb.mostrar();

    return 0;

};
