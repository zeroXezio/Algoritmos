# Ian Alexander Paz Hernandez
# ID: 00603548
# Ingenieria: Tecnologias de la Informacion y Negocios Digitales

n1 = int(input("Digite el primer numero: "))
n2 = int(input("Digite el segundo numero: "))
n3 = int(input("Digite el tercer numero: "))
n4 = int(input("Digite el cuarto numero: "))

if n1 > n2 and n1 > n3 and n1 > n4:
    may = n1
elif n2 > n1 and n2 > n3 and n2 > n4:
    may = n2
elif n3 > n1 and n3 > n2 and n3 > n4:
    may = n3
else:
    may = n4

print("El numero mayor es: ", may)