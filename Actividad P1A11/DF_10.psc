//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Escribir un algoritmo que acepte tres números enteros e imprima el mayor de ellos.
Algoritmo DF_10
	
	Escribir 'Ingrese 3 números enteros:';
	Leer num1, num2, num3;
	
	Si num1<num2 Entonces;
		Si num2<num3 Entonces;
			Escribir 'El número mayor es: ', num3;
		SiNo;
			Escribir 'El número mayor es: ', num2;
		FinSi;
		
	SiNo;
		Si num1<num3 Entonces;
			Escribir 'El número mayor es: ', num3;
		SiNo;
			Escribir 'El número mayor es: ', num1;
		FinSi;
	FinSi;
	
FinAlgoritmo