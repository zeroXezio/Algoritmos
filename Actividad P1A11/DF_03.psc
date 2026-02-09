//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Calcular la media de una serie de números positivos, leídos desde una terminal.
//Un valor de cero indicará que se ha alcanzado el final de la serie de números positivos.
Algoritmo DF_03
	
	Definir C, S, dato, media Como Entero;
	C <- 0;
	S <- 0;
	
	Repetir;
		Escribir "Ingresa un dato: ";
		Leer dato;
		
		Si dato <> 0 Entonces;
		C <- C + 1; //variable tipo contador
		S <- S + dato; //variable tipo acumulador
	FinSi;
		
	Mientras Que dato <> 0;

	media <- Trunc(S / C); //Trunc convierte de real a entero el valor dado
	Escribir "La media es: ", media;
	
FinAlgoritmo
