#pragma once
#include "Punto.h"
#include <tuple>
#include <iostream>

class Linea {

public:
	// Atributos
	Punto* A[2];
	Punto* B[2];


	// Constructores
	Linea() {
		double PuntoA[2];
		double puntoB[2];
		double _dato;
	}
	Linea(double puntoA[], double puntoB[]) {
		double A[2];
		A[0] = puntoA[0];
		A[1] = puntoA[1];
		double B[2];
		B[0] = puntoB[0];
		B[1] = puntoB[1];
	}

	// Metodos
	double mueveDerecha(double _dato);
	double mueveIzquierda(double _dato);
	double mueveArriba(double _dato);
	double mueveAbajo(double _dato);
	double informacion();
	
};