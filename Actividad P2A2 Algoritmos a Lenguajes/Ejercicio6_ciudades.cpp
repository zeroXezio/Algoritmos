// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>
#include <string>
using namespace std;

int main() {
	int indic, num_m, val, taf;
	string ci;

	cout << "Digite el indicativo: ";
	cin >> indic;
	cout << "Digite el # de minutos: ";
	cin >> num_m;

	switch (indic) {
	case 1:
		val = num_m * 50;
		ci = "Bogota";
		taf = 50;
		break;
	case 2:
		val = num_m * 70;
		ci = "Cali";
		taf = 70;
		break;
	case 4:
		val = num_m * 100;
		ci = "Medellin";
		taf = 160;
		break;
	case 5:
		val = num_m * 160;
		ci = "Barranquilla";
		taf = 160;
		break;
	case 6:
		val = num_m * 180;
		ci = "Pereira";
		taf = 180;
	case 7:
		val = num_m * 190;
		ci = "Cucuta";
		taf = 190;
		break;
	default:
		cout << "Indicativo no existe." << endl;
		val = 0;
		ci = "Ninguna";
		taf = 0;
	}

	cout << "Ciudad a la que marca: " << ci << endl;
	cout << "Tarifa: $" << taf << endl;
	cout << "Valor llamada: $" << val << endl;

	return 0;
}