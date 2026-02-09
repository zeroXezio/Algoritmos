//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
//Tabla con depreciaciones acumuladas y valores reales de cada año, 
//de un automóvil comprado por 20.000 euros en el año 2005, 
//durante los seis años siguientes suponiendo un valor de recuperación o rescate de 2.000.
Algoritmo DF_02
	
	Definir costo, valorRescate, valorActual, depreciacion, acumulado Como Real;
	Definir vidaUtil, anio Como Entero;
	
	Escribir "Ingresa el costo: ";
	Leer costo;
	Escribir "Ingresa la vida útil: ";
	Leer vidaUtil;
	Escribir "Ingresa el valor de rescate: "
	Leer valorRescate;
	Escribir "Ingresa el año";
	Leer anio;
	
	valorActual <- costo;
	depreciacion <- (costo - valorRescate) / vidaUtil;
	acumulado <- 0;
	
	Mientras anio<vidaUtil Hacer;
		acumulado <- acumulado + depreciacion;
		valorActual <- valorActual + depreciacion;
		anio <- anio + 1;
		Escribir "El valor acumulado es: $", acumulado;
		Escribir "El valor actual es: $", valorActual;
	Fin Mientras;
	
FinAlgoritmo
