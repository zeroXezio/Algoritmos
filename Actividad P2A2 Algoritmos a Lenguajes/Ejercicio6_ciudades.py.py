# Ian Alexander Paz Hernandez
# ID: 00603548
# Ingenieria: Tecnologias de la Informacion y Negocios Digitales

ind = int(input("Digite el indicativo: "))
num_m = int(input("Digite el # de minutos: "))

match ind:
    case 1:
        val = num_m * 50
        ci  = "Bogota"
        taf = 50
    case 2:
        val = num_m * 70
        ci = "Cali"
        taf = 70
    case 4:
        val = num_m * 100
        ci = "Medellin"
    case 5:
        val = num_m * 160
        ci = "Barranquilla"
        taf = 160
    case 6:
        val = num_m * 180
        ci = "Pereira"
        taf = 180
    case 7:
        val = num_m * 190
        ci = "Cucuta"
        taf = 190
    case _:
        print("Indicativo no existe.")
        val = 0
        ci = ""
        taf = 0

print("Ciudad a la que marca: "), ci
print("Tarifa: $"), taf
print("Valor llamada: $"), val