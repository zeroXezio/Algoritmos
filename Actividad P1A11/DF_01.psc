//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//1. Calcular la paga neta de un trabajador conociendo 
//el número de horas trabajadas, la tarifa horaria y la tasa de impuestos.
Algoritmo DF_01
	
	Definir nombre Como Caracter;
	Definir horas Como Entero;
	Definir precio, bruto, tasas, neto Como Real;
	
	Escribir "Ingresa el nombre del trabajador: ";
	Leer nombre;
	Escribir "Ingresa las horas trabajadas: ";
	Leer horas;
	Escribir "Ingresa la tarifa horaria ";
	Leer precio;
	
	bruto <- horas * precio;
	tasas <- 0.25 * bruto;
	neto <- bruto - tasas; //neto <- horas * precio - (horas * precio * 0.25)
	
	Escribir "El trabajador: ", nombre;
	Escribir "Salario bruto: ", bruto;
	Escribir "Impuestos: ", tasas;
	Escribir "Salario neto: ", neto;
	
FinAlgoritmo