//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Realizar un algoritmo que sume los números pares comprendidos entre 4 y 100
Algoritmo DF_04
	
	SumaTotal <- 2;
	contNumeros <- 4;
	
	Repetir;
			SumaTotal <- SumaTotal + contNumeros;
			contNumeros <- contNumeros + 2;
		
	Hasta Que contNumeros=100;
	
	Escribir "La suma de los números pares comprendidos entre el 4 y el 100 equivale a: ", SumaTotal;
	
FinAlgoritmo