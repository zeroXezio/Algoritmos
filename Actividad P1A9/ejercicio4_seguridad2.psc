//Ian Alexander Paz Hernández
//ID: 00603548
//Carrera: TI (Tecnologías de la Información y Negocios digitales)
Algoritmo seguridad2
	
	secreto <- 123456;
	
	Escribir 'Ingrese contraseña: ';
	Leer code;
	
	Si code=secreto Entonces;
		Escribir 'Acceso permitido.';
	SiNo;
		Escribir 'Acceso denegado.';
	FinSi;
	
FinAlgoritmo