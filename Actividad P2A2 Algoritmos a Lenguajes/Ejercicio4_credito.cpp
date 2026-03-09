// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>
#include <string>
using namespace std;

int main() {
	int pl;
	string art;

	cout << "Digite el plazo otorgado: " << endl;
	cin >> pl;

	switch (pl) {
	case 48:
		art = "un computador.";
		break;
	case 36:
		art = "un TV de 42 pulgadas.";
		break;
	case 24:
		art = "un BlackBerry.";
		break;
	case 12:
		art = "una camara digital.";
		break;
	case 6:
		art = "una impresora.";
		break;
	default:
		art = "";
		break;
			
	}
	if (art == "") {
		cout << "Error. Plazo no existe." << endl;
	}
	else {
		cout << "Podria llevar " << art << endl;
	}

	return 0;
}