# Ian Alexander Paz Hernandez
# ID: 00603548
# Ingenieria: Tecnologias de la Informacion y Negocios Digitales

import math

num1 = int(input("Ingresa el primer numero: "))
num2 = int(input("Ingresa el segundo numero: "))

cuadrado = math.sqrt((num1 * num2)/2)
cubo = math.cbrt((num1 ** 2 + num2 ** 3) / 4 * 3)

print(f'La raiz cuadrada es: {cuadrado}')
print(f'La raiz cubica es: {cubo}')
