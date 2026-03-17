// Alumno: Ian Alexander Paz Hernández
// Carrera: Tecnologías de la información y Negocios digitales
// ID: 00603548

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    // Definición o declaración de variables
    string ideEst, nomEst, apeEst, ideEstMay, nomEstMay, apeEstMay, codMat;
    char opc, seg;
    double not1, not2, not3, notDef, sumNotDef, proEst, sumNotPro, proGru, proEstMay;
    int conMat, conEst;

    // Inicializar variables
    conEst = 0;
    sumNotPro = 0;
    ideEstMay = ""; nomEstMay = ""; apeEstMay = "";
    proEstMay = 0;
    seg = 'S';

    // Ciclo Mientras (seg <> "N")
    while (toupper(seg) != 'N') {
        cout << "Identificacion del estudiante : "; cin >> ideEst;
        cout << "Apellidos del estudiante : "; cin.ignore(); getline(cin, apeEst);
        cout << "Nombres del estudiante : "; getline(cin, nomEst);

        conMat = 0;
        sumNotDef = 0;
        opc = 'S';

        // Ciclo Mientras (opc <> "N")
        while (toupper(opc) != 'N') {
            cout << "Codigo de la materia : "; cin >> codMat;
            cout << "Nota 1 30% : "; cin >> not1;
            cout << "Nota 2 30% : "; cin >> not2;
            cout << "Nota 3 40% : "; cin >> not3;

            notDef = ((not1 * 30 / 100) + ((not2 * 30) / 100) + (not3 * 40) / 100);
            conMat = conMat + 1;
            sumNotDef = sumNotDef + notDef;

            cout << "Nota definitiva: " << round(notDef * 100) / 100 << endl;
            cout << "Ingresa una nueva materia [S/N]? "; cin >> opc;
        }

        proEst = sumNotDef / conMat;
        sumNotPro = sumNotPro + proEst;
        conEst = conEst + 1;

        if (proEst > proEstMay) {
            ideEstMay = ideEst;
            apeEstMay = apeEst;
            nomEstMay = nomEst;
            proEstMay = proEst;
        }

        cout << "Promedio del estudiante: " << round(proEst * 100) / 100 << endl;
        cout << "Desea ingresar un nuevo estudiante [S/N]? "; cin >> seg;
    }

    proGru = sumNotPro / conEst;
    cout << "Numero de estudiantes: " << conEst << endl;
    cout << "Promedio del grupo : " << round(proGru * 100) / 100 << endl;
    cout << "Estudiante con mejor promedio: " << nomEstMay << " (" << proEstMay << ")" << endl;

    return 0;
}