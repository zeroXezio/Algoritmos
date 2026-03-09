// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>
using namespace std;

int main() {
    int Num1, Num2, Num3, Num4, May;

    cout << "Digite numero 1: ";
    cin >> Num1;
    cout << "Digite numero 2: ";
    cin >> Num2;
    cout << "Digite numero 3: ";
    cin >> Num3;
    cout << "Digite numero 4: ";
    cin >> Num4;

    if (Num1 > Num2 && Num1 > Num3 && Num1 > Num4) {
        May = Num1;
    }
    else {
        if (Num2 > Num1 && Num2 > Num3 && Num2 > Num4) {
            May = Num2;
        }
        else {
            if (Num3 > Num1 && Num3 > Num2 && Num3 > Num4) {
                May = Num3;
            }
            else {
                May = Num4;
            }
        }
    }

    cout << "El numero mayor es: " << May << endl;

    return 0;
}