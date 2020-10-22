#include "Laboratorio.h"
#include <iostream>
#include <fstream>
#include "Computadora.h"
using namespace std;

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
{
    if (cont < 5){
        arreglo[cont]= p;
        cont++;
    }
    else {
        cout<<"Ya no hay espacio."<<endl;
    }
}
void Laboratorio::mostrar()
{
    cout<<left;
    cout<<setw(30)<<"Modelo:";
    cout<<setw(17)<<"Marca:";
    cout<<setw(22)<<"Procesador:";
    cout<<setw(16)<<"Ram";
    cout<<endl;
    for (size_t i=0; i<cont; i++)
        {
        Computadora &p = arreglo[i];
        cout<<p;
        //cout<<"Modelo: "<<p.get_modelo()<<endl;
        //cout<<"Marca: "<<p.get_marca()<<endl;
        //cout<<"Procesador: "<<p.get_procesador()<<endl;
        //cout<<"Ram: "<<p.get_ram()<<endl;
        }
}

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("Personajes_tabla.txt");
    if (archivo.is_open())
    {
        archivo<<left;
        archivo<<setw(30)<<"Modelo:";
        archivo<<setw(17)<<"Marca:";
        archivo<<setw(22)<<"Procesador:";
        archivo<<setw(16)<<"Ram";
        archivo<<endl;
        for (size_t i=0; i<cont; i++)
        {
        Computadora &p = arreglo[i];
        archivo << p;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("Personajes.txt");
    if (archivo.is_open())
    {
        
        for (size_t i=0; i<cont; i++)
        {
        Computadora &p = arreglo[i];

        archivo << p.get_modelo() << endl;
        archivo << p.get_marca() << endl;
        archivo << p.get_procesador() << endl;
        archivo << p.get_ram() << endl;
        archivo << endl;
        }
        

    }
    archivo.close();    
}

void Laboratorio::recuperar()
{
    ifstream archivo("Computadoras.txt");
    if(archivo.is_open())
    {
        string temp;
        int ram;
        Computadora p;

        while(true)
        {
            getline(archivo, temp); 
            if(archivo.eof())
               {
                   break;

               }
            p.set_marca(temp);
            getline(archivo, temp); //leer modelo
            p.set_modelo(temp);
            getline(archivo, temp); //leer Sistema
            p.set_procesador(temp);
            getline(archivo, temp); //leer memoria
            ram = stoi(temp);
            p.set_ram(temp);

            agregarComputadora(p);
        }
    }
    archivo.close();
}