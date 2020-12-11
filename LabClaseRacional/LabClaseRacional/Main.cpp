// Creado por:	Bryan Ávila Chang
// Ciclo:		III - 2020

#include "racional.h"
#include <iostream> // Permite uso de cin y cout

using namespace std; //así no es necesario poner std::cin y std:cout


int main()
{
	cout << "¡Bienvenido a Operaciones Con Fracciones!" << endl;
	cout << "Por favor digite el numerador de su fraccion" << endl;
	racional f1, f2;
	int num, den, num2, den2;
	
	while (!(cin >> num)) {
			cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero." << endl;
			cin.clear();
			cin.ignore(1024, '\n');	
			cout << "Por favor digite el numerador de su fraccion" << endl;
	}
	
	cout << "Por favor digite el denominador de su fraccion" << endl;

	while (!(cin >> den) or den == 0) {
		cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero, distinto de cero." << endl;
		cin.clear();
		cin.ignore(1024, '\n');
		cout << "Por favor digite el denominador de su fraccion" << endl;
	}

	f1.setAB(num, den);
	
	cout << "Su nueva fraccion es:  " << f1.getA() << "/" << f1.getB() << endl;
	int menu;
	int salida = 0;
	do {
		cout << endl << endl << "Este es el menu. Por favor seleccione la opcion que desea realizar escribiendo el número de la opcion de interes." << endl << endl;
		cout << "Opcion 1. Cambiar la fraccion." << endl;
		cout << "Opcion 2. Suma de fracciones." << endl;
		cout << "Opcion 3. Resta de fracciones." << endl;
		cout << "Opcion 4. Multiplicacion de fracciones." << endl;
		cout << "Opcion 5. Division de fracciones." << endl;
		cout << "Opcion 6. Elevar fraccion al cuadrado." << endl;
		cout << "Opcion 7. Comprobar si 2 fracciones son equivalentes" << endl;
		cout << "Opcion 8. Terminar programa." << endl;

		while (!(cin >> menu) or menu > 8 or menu <1) {
			cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero entre 1 y 8." << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "Por favor digite la opcion de su preferencia." << endl;
		}

		//Menú y sus opciones
		switch (menu) {
		case 1: // Cambiar fracción
			cout << "Por favor digite el numerador de su fraccion" << endl;
			while (!(cin >> num)) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el numerador de su fraccion" << endl;
			}

			cout << "Por favor digite el denominador de su fraccion" << endl;
			while (!(cin >> den) or den == 0) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero, distinto de cero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el denominador de su fraccion" << endl;
			}
			f1.setAB(num, den);
			
			cout << "Su fraccion es:  " << f1.getA() << "/" << f1.getB() << endl;
			break;

		case 2: //Suma de fracciones
			cout << "Para sumar fracciones necesita una segunda fraccion.\nPor favor digite el numerador de su segunda fraccion\n";
			while (!(cin >> num2)) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el numerador de su segunda fraccion" << endl;
			}

			cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			while (!(cin >> den2) or den2 == 0) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero, distinto de cero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			}
			f2.setAB(num2, den2);

			cout << "Su segunda fraccion es:  " << f2.getA() << "/" << f2.getB() << endl<<endl;
			f1.sumaFracciones(f2);
			break;

		case 3: //Resta de fracciones
			cout << "Para restar fracciones necesita una segunda fraccion.\nPor favor digite el numerador de su segunda fraccion\n";
			while (!(cin >> num2)) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el numerador de su segunda fraccion" << endl;
			}

			cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			while (!(cin >> den2) or den2 == 0) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero, distinto de cero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			}
			f2.setAB(num2, den2);

			cout << "Su segunda fraccion es:  " << f2.getA() << "/" << f2.getB() << endl << endl;
			f1.restaFracciones(f2);
			break;

		case 4: //Multiplicación de fracciones
			cout << "Para multiplicar fracciones necesita una segunda fraccion.\nPor favor digite el numerador de su segunda fraccion\n";
			while (!(cin >> num2)) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un número entero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el numerador de su segunda fraccion" << endl;
			}

			cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			while (!(cin >> den2) or den2 == 0) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un número entero, distinto de cero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			}
			f2.setAB(num2, den2);

			cout << "Su segunda fraccion es:  " << f2.getA() << "/" << f2.getB() << endl << endl;
			f1.multiplicacionFracciones(f2);
			break;

		case 5: //División de fracciones
			cout << "Para dividir fracciones necesita una segunda fraccion.\nPor favor digite el numerador de su segunda fraccion\n";
			while (!(cin >> num2)) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un número entero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el numerador de su segunda fraccion" << endl;
			}

			cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			while (!(cin >> den2) or den2 == 0) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un número entero, distinto de cero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			}
			f2.setAB(num2, den2);

			cout << "Su segunda fraccion es:  " << f2.getA() << "/" << f2.getB() << endl << endl;
			f1.divisionFracciones(f2);
			break;

		case 6: //Fracción al cuadrado
			f1.elevarFraccion();
			break;
		case 7: //Comprobación de equivalencia
			cout << "Para comprobar la equivalencia de fracciones, se necesita una segunda fraccion.\nPor favor digite el numerador de su segunda fraccion\n";
			while (!(cin >> num2)) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un número entero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el numerador de su segunda fraccion" << endl;
			}

			cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			while (!(cin >> den2) or den2 == 0) {
				cout << "Ha ingresado un valor incorrecto. Debe ser un numero entero, distinto de cero." << endl;
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "Por favor digite el denominador de su segunda fraccion" << endl;
			}
			f2.setAB(num2, den2);

			cout << "Su segunda fraccion es:  " << f2.getA() << "/" << f2.getB() << endl << endl;
			f1.comprobacionEquivalente(f2);
			break;

		case 8: 
			salida = 1;
		}
	} while (salida == 0);

	return 0;
};

