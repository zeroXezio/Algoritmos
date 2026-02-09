//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Dados tres números, determinar si la suma de cualquier pareja de ellos es igual al tercer número.
//Si se cumple esta condición, escribir "Iguales" y, en caso contrario, escribir "Distintas".
Algoritmo DF_07
	
	Escribir 'Ingrese número 1, número 2 y número 3:';
	Leer num1, num2, num3;
	
	Si (num1+num2==num3) o (num1+num3==num2) o (num2+num3==num1) Entonces;
		Escribir 'Iguales';
		
	SiNo;
		Escribir 'Distintas';
	FinSi;

FinAlgoritmo