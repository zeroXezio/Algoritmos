//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Realizar un algoritmo que sume los números pares comprendidos entre 4 y 100
Algoritmo DF_04
	
	SumaTotal <- 0;
	contNumeros <- 2;
	
	Repetir;
			SumaTotal <- SumaTotal + contNumeros;
			contNumeros <- contNumeros + 2;
		
	Hasta Que contNumeros>100;
	
	Escribir "La suma de los números pares comprendidos entre el 4 y el 100 equivale a: ", SumaTotal;
	
FinAlgoritmo
//Esta version corregida si suma el número 100 (que en el original es omitido aunque sea par)
//Empieza desde el verdadero valor que es 2 y muestra la SumaTotal correcta