// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>
using namespace std;

int main() {
	int n1, n2, suma = 0;

	cout << "Ingrese el primer numero: ";
	cin >> n1;

	if (n1 % 2 == 0) {
		if (n1 > 0){
			cout << "Ingrese el segundo numero: ";
			cin >> n2;
			if (n2 % 2 == 0) {
				if (n2 > 0) {
					suma = n1 + n2;
					cout << "La suma de los numeros pares es: " << suma << endl;
				}
				else {
					cout << "El segundo numero no es positivo" << endl;
				}
			}
			else {
				cout << "El segundo numero no es par" << endl;
			}
		}
		else {
			cout << "El primer numero no es positivo" << endl;
		}
	}
	else {
		cout << "El primer numero no es par" << endl;
	}
	return 0;
}