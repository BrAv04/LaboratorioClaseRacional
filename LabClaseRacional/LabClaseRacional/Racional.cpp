// Creado por:	Bryan Ávila Chang
// Ciclo:		III - 2020




#include "racional.h"
#include <iostream>

using namespace std;


//Constructores
racional::racional(int _a, int _b) {
	if(_b == 0) {
		bool continuar = true;
		while (continuar) {
			cout << "El valor del denominador debe ser un número entero distinto de cero. Por favor seleccione otro valor para el denominador." << endl;
			if (cin >> _b and _b  != 0) {
				continuar = false;
			} 
			else {
				cin.clear();
				cin.ignore(1024, '\n');
			}
		}
	}
	a = _a / mcd(_a, _b);
	b = _b / mcd(_a, _b);
	//cout << "Se ha creado un racional con parametros" << endl; // Mensaje probando creación
}

racional::racional() {	
	a = 0;
	b = 1;
	//cout << "Se ha creado un racional sin parametros" << endl; // Mensaje probando creación
}

//Metodos

//maximo comun divisor 
int racional::mcd(int _a, int _b){return (_a % _b == 0) ? _b : mcd(_b, _a % _b);}


//suma de fracciones
void racional::sumaFracciones(racional fraccionNueva) {
	int numerador = (a * fraccionNueva.getB()) + (b * fraccionNueva.getA());
	int denominador = b * fraccionNueva.getB();
	int mcd = racional::mcd(numerador, denominador);
	cout << "Sin simplificar:\n";
	cout << a << "/" << b << " + " << fraccionNueva.getA() << "/" << fraccionNueva.getB() << " = " << numerador << "/" << denominador << endl;
	cout << "De forma simplificada:\n";
	numerador = numerador / mcd;
	denominador = denominador / mcd;
	cout << a << "/" << b << " + " << fraccionNueva.getA() << "/" << fraccionNueva.getB() << " = " << numerador << "/" << denominador << endl;
}

//resta de fracciones
void racional::restaFracciones(racional fraccionNueva) {
	int numerador = (a * fraccionNueva.getB()) - (b * fraccionNueva.getA());
	int denominador = b * fraccionNueva.getB();
	int mcd = racional::mcd(numerador, denominador);
	cout << "Sin simplificar:\n";
	cout << a << "/" << b << " - " << fraccionNueva.getA() << "/" << fraccionNueva.getB() << " = " << numerador << "/" << denominador << endl;
	cout << "De forma simplificada:\n";
	numerador = numerador / mcd;
	denominador = denominador / mcd;
	cout << a << "/" << b << " - " << fraccionNueva.getA() << "/" << fraccionNueva.getB() << " = " << numerador << "/" << denominador << endl;
}

//multiplicacion de fracciones
void racional::multiplicacionFracciones(racional fraccionNueva) {
	int numerador = a * fraccionNueva.getA();
	int denominador = b * fraccionNueva.getB();
	int mcd = racional::mcd(numerador, denominador);
	cout << "Sin simplificar:\n";
	cout << a << "/" << b << " * " << fraccionNueva.getA() << "/" << fraccionNueva.getB() << " = " << numerador << "/" << denominador << endl;
	cout << "De forma simplificada:\n";
	numerador = numerador / mcd;
	denominador = denominador / mcd;
	cout << a << "/" << b << " * " << fraccionNueva.getA() << "/" << fraccionNueva.getB() << " = " << numerador << "/" << denominador << endl;
}

//division de fracciones
void racional::divisionFracciones(racional fraccionNueva) {
	int numerador = a * fraccionNueva.getB();
	int denominador = b * fraccionNueva.getA();
	int mcd = racional::mcd(numerador, denominador);
	cout << "Sin simplificar:\n";
	cout << a << "/" << b << " ÷ " << fraccionNueva.getA() << "/" << fraccionNueva.getB() << " = " << numerador << "/" << denominador << endl;
	cout << "De forma simplificada:\n";
	numerador = numerador / mcd;
	denominador = denominador / mcd;
	cout << a << "/" << b << " ÷ " << fraccionNueva.getA() << "/" << fraccionNueva.getB() << " = " << numerador << "/" << denominador << endl;
}

//elevar fraccion
void racional::elevarFraccion() {
	int numerador = a * a;
	int denominador = b * b;
	int mcd = racional::mcd(numerador, denominador);
	cout << "Sin simplificar:\n";
	cout << a << "/" << b << " elevado al cuadrado es = " << numerador << "/" << denominador << endl;
	cout << "De forma simplificada:\n";
	numerador = numerador / mcd;
	denominador = denominador / mcd;
	cout << a << "/" << b << " elevado al cuadrado es = " << numerador << "/" << denominador << endl;
}

//comprobacion equivalente
void racional::comprobacionEquivalente(racional fraccionNueva) { cout << (((a / b) == (fraccionNueva.getA() / fraccionNueva.getB())) ? "Las fracciones son equivalentes.\n" : "Las fracciones no son equivalentes. \n");}

//Mutadores
void racional::setAB(int _a, int _b) { 
	a = _a / racional::mcd(_a, _b);
	b = _b / racional::mcd(_a, _b);
}

//Accesores
int racional::getA() { return a; }
int racional::getB() { return b; }

//Destructor
racional::~racional(){}