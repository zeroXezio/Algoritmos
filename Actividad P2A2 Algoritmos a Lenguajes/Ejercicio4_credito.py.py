# Ian Alexander Paz Hernandez
# ID: 00603548
# Ingenieria: Tecnologias de la Informacion y Negocios Digitales

pl = int(input("Digite el plazo otorgado: "))

match pl:
    case 48:
        art = "un computador."
    case 36:
        art = "un TV de 42 pulgadas."
    case 24:
        art = "un BlackBerry."
    case 12:
        art = "una camara digital."
    case 6:
        art = "una impresora."
    case _:
        art = ""

if art == "":
    print("Error. Plazo no existe.")
else:
    print(f"Podria llevar {art}")