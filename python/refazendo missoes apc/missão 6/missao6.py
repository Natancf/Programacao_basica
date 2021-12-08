menu = 0
voltarMenu = 1
 
while True:
    print("+--------------------------------------+")
    print("|                 Menu                 |")
    print("+--------------------------------------+")
    print("| 01 - Informações                     |")
    print("| 02 - Calcular IMC                    |")
    print("| 03 - Par ou Impar                    |")
    print("| 04 - Multiplicação                   |")
    print("| 05 - Divisão                         |")
    print("| 06 - Sair                            |")
    print("+--------------------------------------+")
    menu = int(input(""))
    if menu == 1:
        while(voltarMenu != 0):
            print("Nome do Dev: Natanael Costa de Freitas")
            print("Ano do desenvolvimento do programa: 2021")
            voltarMenu = int(input("0 - voltar "))
    if menu == 2:
        while(voltarMenu != 0):
            peso = float(input("Digite seu peso:(Ex: 32.5) "))
            altura = float(input("Digite sua altura:(Ex: 1.75) "))
            imc = peso/(altura**2)
            print(f"Seu IMC é {imc:.2f}")
            voltarMenu = int(input("0 - voltar "))
    if menu == 3: 
        while(voltarMenu != 0):
            numero = int(input("Digite um número inteiro: "))
            if (numero % 2 == 0):
                print("Este número é par")
            else:
                print("Este número é ímpar")
            voltarMenu = int(input("0 - voltar "))
    if menu == 4:
        while(voltarMenu != 0):
            numero1 = float(input("número 1: "))
            numero2 = float(input("número 2: "))
            print(f"{numero1r}/{numero2} = {numero1*numero2}")
            voltarMenu = int(input("0 - voltar "))
    if menu == 5:
        while(voltarMenu != 0):
            numerador = float(input("número 1: "))
            denominador = float(input("número 2: "))
            if denominador == 0:
                print("O denominador não pode ser zero em uma divisão")
                print("Por gentileza insira outro valor")
                denominador = float(input("número 2: "))
            print(f"{numerador}/{denominador} = {numerador/denominador}")
            voltarMenu = int(input("0 - voltar "))
    if voltarMenu == 0:
        voltarMenu = 1
    if not menu != 6:
        break