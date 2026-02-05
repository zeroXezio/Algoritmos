//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
Algoritmo seguridad3
	
	secreto <- 123456;
	
	Escribir "Ingrese código:';
	Leer code;
	
	Mientras code<>secreto Hacer
		Escribir "Código incorrecto. Vuelva a Intentar:";
		Leer code;
	FinMientras;
	
	Escribir "Acceso permitido.";
	
FinAlgoritmo