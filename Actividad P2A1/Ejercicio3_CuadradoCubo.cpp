// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int num, cuadrado, cubo;

  cout << "Ingresa el numero" << endl;
  cin >> num;

  cuadrado = num * num;
  cubo = num * num * num;

  cout << "El cuadrado del numero es: " << cuadrado << endl;
  cout << "El cubo del numero es: " << cubo << endl;

  cout << "La raiz cuadrada es: " << sqrt(num) << endl;
  cout << "La raiz cubica es: " << cbrt(num) << endl;
  
  return 0;
}
