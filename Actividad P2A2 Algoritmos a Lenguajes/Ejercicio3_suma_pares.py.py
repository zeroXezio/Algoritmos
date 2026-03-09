# Ian Alexander Paz Hernandez
# ID: 00603548
# Ingenieria: Tecnologias de la Informacion y Negocios Digitales

n1 = int(input("Ingrese el primer numero: "))

if n1 % 2 == 0:
    if n1 > 0:
        n2 = int(input("Ingrese el segundo numero: "))
        if n2 % 2 == 0:
            if n2 > 0:
                suma = n1 + n2
                print("La suma de los numeros pares es: ", suma)
            else:
                print("El segundo numero no es positivo")
        else:
            print("El segundo numero no es par")
    else:
        print("El primer numero no es positivo")
else:
    print("El primer numero no es par")