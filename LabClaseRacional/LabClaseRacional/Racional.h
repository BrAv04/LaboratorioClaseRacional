// Creado por:	Bryan Ávila Chang
// Ciclo:		III - 2020

#ifndef RACIONAL_H
#define RACIONAL_H

class racional
{
private:
	int a;
	int b;	
public:
	//Constructores
	racional(int, int);
	racional();

	//Metodos
	int mcd(int, int);
	void sumaFracciones(racional);
	void restaFracciones(racional);
	void multiplicacionFracciones(racional);
	void divisionFracciones(racional);
	void elevarFraccion();
	void comprobacionEquivalente(racional);


	//Mutadores
	void setAB(int, int);

	//Accesadores 
	int getA();
	int getB();

	//Destructor
	~racional();
};

#endif


