# Ian Alexander Paz Hernández
# Carrera: TI (Tecnologías de la información y negocios digitales)
# ID: 00603548

import random

print("EL REINO DEL DRAGON")
nombre = input("Ingresa tu nombre: ")
    
continuar_juego = "s"

while continuar_juego == "s":
    paths = int(input("¿Cuantos caminos desea intentar cruzar?: "))
    
    puntos = 0
    perdio = False 

    for nivel in range(1, paths + 1):
        print("\nCAMINO", nivel)
        print(nombre, "Estas frente a dos cuevas (1 y 2).")
        
        dragon_amable = random.randint(1, 2)
        
        eleccion = int(input("¿En que cueva entraras? (1 o 2): "))
        
        if eleccion == dragon_amable:
            print("El dragon es amable y te da su tesoro.")
            puntos = puntos + 100
            print("Ganaste 100 puntos. Total:", puntos)
        else:
            print("El dragon estaba hambriento y te come.")
            print(nombre, "has perdido. Puntos que tenias:", puntos)
            perdio = True
            break 

    if perdio == False:
        print("\n¡FELICIDADES", nombre, "!")
        print("Lograste cruzar los", paths, "caminos.")
        print("Puntuacion final:", puntos, "puntos.")

    continuar_juego = input("\n¿Quieres volver a jugar? (s/n): ")

print("Gracias por jugar")