// Alumno: Ian Alexander Paz Hernández
// Carrera: Tecnologías de la información y Negocios digitales
// ID: 00603548

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    // 1. Definición o declaración de las variables
    string ideEmp, apeEmp, nomEmp;
    double salBas, porBon, valBon, bonTot, porEmp1, porEmp2, porEmp3, porEmp4, porEmp5, porEmp6, porEmp7;
    int tieSer, conEmp1, conEmp2, conEmp3, conEmp4, conEmp5, conEmp6, conEmp7, empTot;
    char opc;

    // 2. Inicialización de variables
    bonTot = 0;
    conEmp1 = 0; conEmp2 = 0; conEmp3 = 0; conEmp4 = 0;
    conEmp5 = 0; conEmp6 = 0; conEmp7 = 0;

    // 3. Ciclo repetir
    do {
        // 4. Datos de entrada
        cout << "Identificacion del empleado: "; cin >> ideEmp;
        cout << "Apellidos del empleado : "; cin.ignore(); getline(cin, apeEmp);
        cout << "Nombres del empleado : "; getline(cin, nomEmp);
        cout << "Salario basico : "; cin >> salBas;
        cout << "Anios de servicio : "; cin >> tieSer;

        // 5 y 6. Procesos parciales (Estructura de escalera fiel al pseudocódigo)
        if (tieSer < 5) {
            porBon = 5;
            conEmp1 = conEmp1 + 1;
        }
        else {
            if (tieSer < 10) {
                porBon = 10;
                conEmp2 = conEmp2 + 1;
            }
            else {
                if (tieSer < 15) {
                    porBon = 15;
                    conEmp3 = conEmp3 + 1;
                }
                else {
                    if (tieSer < 20) {
                        porBon = 20;
                        conEmp4 = conEmp4 + 1;
                    }
                    else {
                        if (tieSer < 25) {
                            porBon = 25;
                            conEmp5 = conEmp5 + 1;
                        }
                        else {
                            if (tieSer < 30) {
                                porBon = 35;
                                conEmp6 = conEmp6 + 1;
                            }
                            else {
                                porBon = 50;
                                conEmp7 = conEmp7 + 1;
                            }
                        }
                    }
                }
            }
        }

        valBon = (salBas * porBon) / 100;
        bonTot = bonTot + valBon;

        // 7. Datos de salida parciales
        cout << "Identificacion del empleado: " << ideEmp << endl;
        cout << "Nombres del empleado :" << nomEmp << endl;
        cout << "Apellidos del empleado : " << apeEmp << endl;
        cout << "Porcentaje de bonificacion : " << porBon << endl;
        cout << "Valor bonificacion : " << valBon << endl;

        // 8. Pregunta al usuario
        cout << "Desea ingresar nuevos datos [S/N]? "; cin >> opc;

    } while (toupper(opc) != 'N');

    // 9. Procesos totales
    empTot = conEmp1 + conEmp2 + conEmp3 + conEmp4 + conEmp5 + conEmp6 + conEmp7;
    porEmp1 = (conEmp1 * 100.0) / empTot;
    porEmp2 = (conEmp2 * 100.0) / empTot;
    porEmp3 = (conEmp3 * 100.0) / empTot;
    porEmp4 = (conEmp4 * 100.0) / empTot;
    porEmp5 = (conEmp5 * 100.0) / empTot;
    porEmp6 = (conEmp6 * 100.0) / empTot;
    porEmp7 = (conEmp7 * 100.0) / empTot;

    // 10. Datos de salida totales
    cout << "Empleados con menos de 5 anios : " << conEmp1 << " " << porEmp1 << "%" << endl;
    cout << "Total empleados : " << empTot << endl;
    cout << "Bonificaciones total pagadas : " << bonTot << endl;

    return 0;
}