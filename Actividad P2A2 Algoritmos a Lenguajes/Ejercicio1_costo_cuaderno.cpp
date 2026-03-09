// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>
using namespace std;

int main() {
	int numhojas;

	cout << "¿Cual es el numero de hojas del cuaderno? ";
	cin >> numhojas;

	if(numhojas == 250){
	cout << "El costo del cuaderno es de: $ 16.000" << endl;
	}
	else if (numhojas == 100) {
		cout << "El costo del cuaderno es de: $ 11.000" << endl;
	}
	else if (numhojas == 80) {
        cout << "El costo del cuaderno es de: $ 8.000" << endl;
	}
	else if (numhojas == 50) {
		cout << "El costo del cuaderno es de: $ 4.500" << endl;
	}
	else {
		cout << "Numero de hojas incorrecto" << endl;
	}

	return 0;
}