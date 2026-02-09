//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Dada una secuencia de números, contar e imprimir el número de ceros de la secuencia.
Algoritmo DF_06
	
	total <- 0;
	Escribir "Escriba la secuencia de números";
	
	Mientras respuesta<>'no' Hacer;
		Escribir 'Ingrese el número correspondiente:';
		Leer numer0;
		
		Si numer0==0 Entonces;
			total <- total+1;
		FinSi;
		
		Escribir '¿Hay más números en la secuencia para ingresar?';
		Leer respuesta;
	FinMientras;
	
	Escribir 'La cantidad de ceros en la secuencia es:', total;
	
FinAlgoritmo