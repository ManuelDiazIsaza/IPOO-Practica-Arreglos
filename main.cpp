/*
  Archivo: Main.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2017-08-11
  Fecha C:ltima modificaciC3n: 2017-08-31
  VersiC3n: 0.1
  Licencia: GPL
*/

//Utilidad: DemostraciC3n arreglos unidimensionales

#include <iostream>
#include <stdio.h>
#include "Vector.h"

using namespace std;

int
main ()
{
  Vector miVector;
  miVector.imprimirNotas ();
  cout << "El Promedio de Notas es: " << miVector.promedioNotas();
  cout << endl << "La mejor nota es: " << miVector.mejorNota();
  cout << endl << "La Peor nota es: " <<  miVector.peorNota();
  return 0;
}

