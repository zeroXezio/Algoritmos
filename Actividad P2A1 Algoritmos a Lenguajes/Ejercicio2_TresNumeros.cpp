// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>

using namespace std;

int main () {
  int num1, num2, num3, suma, producto;

  cout << "Ingresa el primer numero" << endl;
  cin >> num1;

  cout << "Ingresa el segundo numero" << endl;
  cin >> num2;

  cout << "Ingresa el tercer numero" << endl;
  cin >> num3;

  suma = num1 + num2 + num3;
  producto = num1 * num2 * num3;

  cout << "La suma de los 3 numeros es: " << suma << endl;
  cout << "El producto de los 3 numeros es: " << producto << endl;
  
  return 0;
}
