// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int num1, num2;
  double cuadrado, cubo;

  cout << "Ingresa el primer numero: " << endl;
  cin >> num1;
  cout << "Ingresa el segundo numero: " << endl;
  cin >> num2;

  cuadrado = sqrt((num1 * num2 /2));
  cubo = cbrt((pow(num1, 2) + pow(num2, 3)) / 4 * 3);

  cout << "La raiz cuadrada es: " << cuadrado << endl;
  cout << "La raiz cubica es: " << cubo << endl;
  
  return 0;
}
