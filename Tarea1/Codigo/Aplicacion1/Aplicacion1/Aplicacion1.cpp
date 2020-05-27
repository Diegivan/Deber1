/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
#include<iostream>
#include <sstream>
#include"Formula.cpp"
#include"Fraccion.cpp"
#include"Ingreso.h"

using namespace std;

int main() {

	Formula obj;
	Fraccion obj2;
	Ingreso ingreso;
	float a, b, c,d;
	string dim;

	cout << ">Ingrese los datos (ax^2+bx+c)" << endl;

	dim = ingreso.leer("Ingrese el coeficiente a", 2);
	istringstream(dim) >> a;
	obj.setNum1(a);


	dim = ingreso.leer("Ingrese el coeficiente b", 2);
	istringstream(dim) >> b;
	obj.setNum2(b);


	dim = ingreso.leer("Ingrese el coeficiente c", 2);
	istringstream(dim) >> c;
	obj.setNum3(c);

	dim = ingreso.leer("Ingrese el coeficiente c", 2);
	istringstream(dim) >> d;
	obj.setNum4(d);

	obj2.calcular(obj.getNum1(), obj.getNum2(), obj.getNum3(),obj.getNum4());
	return 0;
}