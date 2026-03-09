// Ian Alexander Paz Hernandez
// ID: 00603548
// Ingenieria: Tecnologias de la Informacion y Negocios Digitales

#include <iostream>
using namespace std;

int main() {
    int Num;
    float Val_Compra, Total_Pag;

    cout << "Digite numero obtenido: ";
    cin >> Num;
    cout << "Digite valor de la compra: $ ";
    cin >> Val_Compra;

    switch (Num) {
    case 0:
    case 1:
        Total_Pag = Val_Compra * 0.95;
        break;
    case 2:
    case 3:
        Total_Pag = Val_Compra * 0.87;
        break;
    case 4:
    case 5:
        Total_Pag = Val_Compra * 0.78;
        break;
    case 6:
    case 7:
        Total_Pag = Val_Compra * 0.7;
        break;
    case 8:
    case 9:
        Total_Pag = Val_Compra * 0.5;
        break;
    default:
        cout << "Error. Numero no existe." << endl;
        Total_Pag = Val_Compra;
        break;
    }

    cout << "Valor total a pagar: $" << Total_Pag << endl;

    return 0;
}