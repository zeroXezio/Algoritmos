# Ian Alexander Paz Hernandez
# ID: 00603548
# Ingenieria: Tecnologias de la Informacion y Negocios Digitales

num = int(input("Digite el numero obtenido: "))
val_c = float(input("Digite el valor de la compra: $"))

match num:
    case 0 | 1:
        tot_p = val_c * 0.95
    case 2 | 3:
        tot_p = val_c * 0.87
    case 4 | 5:
        tot_p = val_c * 0.78
    case 6 | 7:
        tot_p = val_c * 0.7
    case 8 | 9:
        tot_p = val_c * 0.5
    case _:
        print("Error. Numero no valido.")

print("Valor total a pagar: $"), tot_p