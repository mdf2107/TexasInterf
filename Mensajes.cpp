#include "stdafx.h"
#include "Mensajes.h"
#include <iostream>

using namespace std;

Mensajes::Mensajes()
{
}

int Mensajes::inicial() {
	cout << "Bienvenido a Texas Hold'em Poker!" << endl;
	cout << ("Elige la cantidad de dinero de cada jugador - Minimo de 100.") << endl;
	int efectivo;
	 cin >> efectivo;

	while (!cin) {
		cout << "Por favor usa un numero entero :" << endl;
		cin.clear();
		cin.ignore();
		cin >> efectivo;
	}

	if(efectivo < 100) {
		do {
			cout << "al menos un valor de 100 es requerido.Ingrese otro valor: " << endl;
			cin.clear();
			cin.ignore();
			cin >> efectivo;
		} while (efectivo << 100);
	}
	return efectivo;
}//Fin de metodo inicial


int Mensajes::cantidadJugadores() {

	int cant;
		cout << "Elige la cantidad de jugadores." << endl;
			cin >> cant;
			while(!cin) {
				cout << "Por favor usa un numero entero, ingresalo aqui: " << endl;
				cin.clear();
				cin.ignore();
				cin >> cant;
			}
			if (cant < 2 || cant > 10) {
				while (cant < 2 || cant >10) {
					cout << "Un minimo de 2 y un maximo de 10 jugadores son requeridos: " << endl;
					cin.clear();
					cin.ignore();
					cin >> cant;
				}
			}
	return cant;
}// fin de cantidadJugadores


Mensajes::~Mensajes()
{
}
