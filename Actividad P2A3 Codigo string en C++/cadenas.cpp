/*
Ian Alexander Paz Hernández
Carrera: Tecnologias de la información y Negocios digitales
ID: 00603548
*/

/* Estructura (clase) string */
#include <iostream>
#include <string>

using namespace std;

int main() {
	string nombre, apellidos;

	cout << "Ingresa tu nombre: ";
	cin >> nombre;
	cin.ignore();

	cout << "Ingresa tus apellidos: ";
	getline(cin, apellidos); //cin >> apellidos;

	cout << "Hola " << nombre << " " << apellidos << " mucho gusto" << endl;

	//concatenar cadenas 

	string descripcion, lugar;
	int tiempo;

	cout << "Ingrese el lugar de orign: ";
	cin >> lugar;

	cout << "Ingrese el tiempo que has vivido ahi: ";
	cin >> tiempo;

	descripcion = "No conozco " + lugar + " pero creo que seria muy bonito " + "visitarlo por que has vivido " + to_string(tiempo) + " anios"; // tambien se puede convertir de string a entero con int()
	cout << descripcion << endl;

	//Medir la longitud de un texto length()
	cout << "Tu nombre " << nombre << " tiene " << nombre.length() << " caracteres\n";
	cout << "Tu apellido " << apellidos << " tiene " << apellidos.length() << " caracteres\n";
	cout << "La descripcion tiene " << descripcion.length() << " caracteres\n";

	// A cada caracter en una cadena de texto se le asigna una posicion empezando desde 0

	//separar los caracteres de una cadena
	cout << nombre[0] << endl;
	cout << nombre[1] << endl;
	cout << nombre[2] << endl;
	cout << endl;

	//Utilizando ciclos

	for (int i = 0; i < lugar.length(); i++) {
		cout << lugar[i] << endl;
	}
	cout << endl;

	//Imprimiendo invertido
	

	for (int i = lugar.length() - 1; i >= 0; i--) {
		cout << lugar[i] << endl;
	}
	cout << endl;
	

	return 0;
}