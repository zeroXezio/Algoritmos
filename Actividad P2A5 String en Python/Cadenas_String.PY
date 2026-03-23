#Nombre: Ian Alexander Paz Hernández
#ID: 00603548
#Carrera: TI

#Cadena / String es una cadena de caracteres


#La variable nombre al ser una cadena "pura" no necesita en int() y se puede poner solamente input()
nombre = input("Ingrese su nombre: ")
apellidos = input("Ingrese sus apellidos: ")

print(f"Hola {nombre} {apellidos}, mucho gusto!")

lugar = input("Ingrese su lugar de origen: ")

#tiempo es un valor entero, por lo que si necesita el int()
tiempo = int(input("Cuantos anios has vivido ahi: "))

#Concatenacion
descripcion = "No conozco " + lugar + ", pero seria bonito visitarlo por que has vivido " + str(tiempo) + " anios alla."
text2 = f"No conozco {lugar}, pero seria bonito visitarlo por que has vivido {tiempo} anios alla."

print("Nombre: ", nombre)
print("Apellidos: ", apellidos)
print(descripcion)

print(nombre[0])
print(nombre[1])
print(nombre[2])

tamanio = len(nombre)
print("Tamanio de su nombre: ", tamanio)
print(nombre[tamanio-1]) #nombre[len(nombre)-1]

print(nombre[0:3]) #print(nombre de la posicion 0 a 3 o del primer hasta el cuarto caracter)
#print(nombre[:3]) es lo mismo que lo anterior

print(nombre[3:len(nombre)]) #print(nombre desde la posicion 3 o cuarto caracter)
#print(nombre[3:]) es lo mismo que lo anterior

print(nombre[2:5]) 

#for (int i = 0; i < lugar.length(); i++)
for i in range(0, len(nombre)):
    print(nombre[i], end = " ")

for i in nombre:
    print(i, end = " ")


#Impresion al reves de caracteres
for i in range(len(nombre)-1,-1,-1): 
    print(nombre[i], end = " ") 

