/*
Ian Alexander Paz Hernández
Carrera: TI
00603548
*/

/*Arreglos
Son una coleccion finita de elementos del mismo tipo de datos
*/

/* [] arreglos basicos tambien existen los vectores <vector>, pero no los usaremos. Diferencia entre arreglos basicos y vectores, ñlos vectores son mas precisos */

#include <iostream>
using namespace std;

int main() {
	//Crear un arreglo que guarde las notas de 5 materias
	double nota[5]; //Declarar una variable de tipo double de 5 elementos

	double nota2[] = { 9.9, 8.5, 10, 7.2 }; //Crear un arreglo con los valores asigandos desde antes

	double nota3[4] = { 9.9 }; //Aqui hay un arreglo de 4 elementos, pero solo asignamos 1, asi que lo que pasara es que en la posicion 0 estara el elemento asignado y en las otras posiciones seran ceros

	//1) Agregar valores a los elementos de un arreglo

	nota[0] = 9.2; //Asignar valor al primer elemento, se puso 0 porque los arreglos siempre se cuentan desde 0
	nota[1] = 8.1;
	nota[2] = 7.3;
	nota[3] = 9.9;
	nota[4] = 8.1; //Forma artesanal, osea a mano. Se puede usar en estructuras ciclicas

	//Posible pregunta de examen: hay que tener cuidado cuando se hable de posicion y elemento

	//Arreglos con estructuras ciclicas for(int i = 0;)
	for (int i = 0; i < 5; i++) { // se puede poner i <= 4 
		cout << "Ingrese una calificacion: ";
		cin >> nota[i];
	}

	//2) Mostrara los elementos de un arreglo, forma artesanal

	cout << "Artesanal" << endl;
	cout << nota[0] << ", " << nota[1] << ", " << nota[2] << ", " << nota[3] << ", " << nota[4] << endl << endl; //La maestra puso los 2 endl, no se porque

	//Forma de estructura ciclica
	cout << "Utilizando ciclos" << endl;
	for (int i = 0; i < 5; i++) {
		cout << nota[i] << " - ";
	}


	return 0;
}