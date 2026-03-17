# Alumno: Ian Alexander Paz Hernández
# Carrera: Tecnologías de la información y Negocios digitales
# ID: 00603548


# Inicializar variables
conEst = 0
sumNotPro = 0.0
ideEstMay = nomEstMay = apeEstMay = ""
proEstMay = 0.0
seg = "S"

while seg.upper() != "N":
    ideEst = input("Identificacion del estudiante : ")
    apeEst = input("Apellidos del estudiante : ")
    nomEst = input("Nombres del estudiante : ")

    conMat = 0
    sumNotDef = 0.0
    opc = "S"

    while opc.upper() != "N":
        codMat = input("Codigo de la materia : ")
        not1 = float(input("Nota 1 30% : "))
        not2 = float(input("Nota 2 30% : "))
        not3 = float(input("Nota 3 40% : "))

        notDef = ((not1 * 30 / 100) + ((not2 * 30) / 100) + (not3 * 40) / 100)
        conMat = conMat + 1
        sumNotDef = sumNotDef + notDef

        print("Nota definitiva:", round(notDef, 2))
        opc = input("Ingresa una nueva materia [S/N]? ")

    proEst = sumNotDef / conMat
    sumNotPro = sumNotPro + proEst
    conEst = conEst + 1

    if proEst > proEstMay:
        ideEstMay, apeEstMay, nomEstMay, proEstMay = ideEst, apeEst, nomEst, proEst

    print("Promedio del estudiante:", round(proEst, 2))
    seg = input("Desea ingresar un nuevo estudiante [S/N]? ")

proGru = sumNotPro / conEst
print("Numero de estudiantes:", conEst)
print("Promedio del grupo:", round(proGru, 2))