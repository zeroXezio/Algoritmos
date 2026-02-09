//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Escribir un algoritmo que calcule el producto de los n primeros números naturales. 
Algoritmo DF_09
	
	Escribir 'Ingrese la cantidad de números naturales necesarios para el cálculo:';
	Leer n;
	
	Si n==0 Entonces;
		Escribir 'Factorial de 0 igual a 1';
		
	SiNo;
		Si n>0 Entonces;
			p <- 1;
			
			Repetir;
				p <- p*n;
				n <- n-1;
			Hasta Que n==1;
			Escribir 'Factorial = ', p;
			
		SiNo;
			Escribir 'Numero negativo';
			Escribir 'Prueba con positivos';
		FinSi;
	FinSi;

FinAlgoritmo