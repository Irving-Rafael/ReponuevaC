#include <iostream>
#include "Computadora.h"
#include "Laboratorio.h"
#include <iostream>
#include <fstream>


using namespace std;
int main()
{

    /*Computadora a = Computadora();
    a.set_modelo("Inspiron");
    a.set_marca("DELL");
    a.set_procesador("Intel");
    a.set_ram(12);
    Computadora b = Computadora("All-in-one","hp","AMD",8);
    Laboratorio lb;


    //lb.agregarComputadora(a);
    //lb.agregarComputadora(b);
    lb<<a<<b;

    //cout<<b;
    Computadora d;
    cin>>d;
    lb << d;

    lb.mostrar();
    lb.respaldar_tabla();
    lb.respaldar()*/
    Laboratorio lb;
    lb.recuperar();
    lb.mostrar();

    return 0;

};
