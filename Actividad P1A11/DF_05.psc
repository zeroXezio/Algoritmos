//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Cálculo de los salarios mensuales de empleados sabiendo que esto se 
//calculan en base a horas semanales trabajadas y precio especificado por horas.
Algoritmo DF_05
	
	Definir horas Como Entero;
	Definir precio_hora, salario_mensual, salario_total Como Real;
	Definir nombre Como Caracter;
	
	datos <- "si";
	
	Mientras datos=="si" Hacer;
		Escribir "Ingrese el nombre del trabajador: ";
		Leer nombre;
		Escribir "Ingrese las horas trabajadas: ";
		Leer horas;
		Escribir "Ingresa el pago por hora ";
		Leer precio_hora;
		
		Si horas <= 40 Entonces;
			salario_mensual <- horas * precio_hora;
		SiNo;
			salario_mensual <- 40 * precio_hora + 1.5 * precio_hora * (horas -40);
		FinSi;
		
		Escribir "El salario mensual del trabajador " nombre, " es de $", salario_mensual;
		
		Escribir "¿Requiere otro cálculo? Escriba si";
		Leer datos;
	FinMientras;
	
FinAlgoritmo