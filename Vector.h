/*
  Archivo: Vector.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creaci?n: 2018-02-09
  Fecha ?ltima modificaci?n: 2018-02-09
  Versi?n: 0.1
  Licencia: GPL
*/

// Clase: Vector
// Responsabilidad: Manejo de Vector
// Colaboración: ninguna

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
	double notas[5];

	public:
		Vector();
		~Vector();
		int tamanoVector();
		double generarNota();
		void imprimirNotas();
        double promedioNotas();
        double mejorNota();
        double peorNota();
	protected:
};

#endif
