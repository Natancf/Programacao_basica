# Programa 5.1 - Contagem de cédulas
valor = int(input("Digite o valor a pagar:")) # Usuário digita o valor
cédulas = 0
valor_cedula = 50
apagar = valor
while True:
    if valor_cedula <= apagar:
        apagar -= valor_cedula
        cédulas += 1
    else:
        print(f"{cédulas} cédula(s) de R${valor_cedula}")
        if apagar == 0:
            break
        if valor_cedula == 50:
            valor_cedula = 20
        elif valor_cedula == 20:
            valor_cedula = 10
        elif valor_cedula == 10:
            valor_cedula = 5
        elif valor_cedula == 5:
            valor_cedula = 1
        cédulas = 0