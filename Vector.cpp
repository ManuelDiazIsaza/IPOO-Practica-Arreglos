/*
  Archivo: Vector.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creaci�n: 2017-08-31
  Fecha �ltima modificaci�n: 2017-08-31
  Versi�n: 0.1
  Licencia: GPL
*/

#include "Vector.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

Vector::Vector()
{
  srand(time(0));
	for(int i = 0; i<tamanoVector(); i++){
		notas[i] = generarNota();
	}
}

Vector::~Vector()
{
  //M�todo destructor
}

int Vector::tamanoVector(){
			return sizeof notas / sizeof *notas;
}

double Vector::generarNota()
{
	return (0 + rand() % 10 ) / 2.0;
}

void Vector::imprimirNotas(){
	for(int i= 0; i < tamanoVector(); i++){
		cout << "Nota [ " << i+1 << " ] = " << notas[i] << endl;
	}
}

double Vector::promedioNotas()
{
    double acum=0;
    for(int i=0;i < tamanoVector();i++)
    {
        acum = acum + notas[i];
    }
    return acum/tamanoVector();
}

double Vector::mejorNota()
{
    double mejorNota=0;
    for(int i=0;i < tamanoVector();i++)
    {
        if(mejorNota < notas[i])
        mejorNota = notas[i];
    }
    return mejorNota;
}

double Vector::peorNota()
{
    double peorNota=5;
    for(int i=0;i < tamanoVector();i++)
    {
        if(peorNota > notas[i])
            peorNota = notas[i];
    }
    return peorNota;
}


