// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>

using namespace std;

int main () {
  int num1, num2, doble, triple;

  cout << "Ingresa el primer numero: " << endl;
  cin >> num1;
  cout << "Ingresa el segundo numero: " << endl;
  cin >> num2;

  doble = (num1 + num2) * 2;
  triple = (num1 - num2) * 3;

  cout << "El doble de la suma es: " << doble << endl;
  cout << "El triple de la resta es: " << triple << endl;

  return 0;
}
