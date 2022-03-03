numeros = 0 
contador = 0
menu = 0
voltarMenu = 1
verificaNegativo = 0
verificaPar = 0

print("Digite \"0\" para parar")
while True:
    numeros = int(input("Digite numero: "))
    if not numeros != 0:
        break
    contador = contador + 1
    if(numeros < 0):
        verificaNegativo = verificaNegativo + 1
    if (numeros % 2 == 0):
        verificaPar = verificaPar + 1

while True:
    print("+--------------------------------------+")
    print("|                 Menu                 |")
    print("+--------------------------------------+")
    print("| 01 - Quantidade de números inseridos |")
    print("| 02 - Quantidade de números negativos |")
    print("| 03 - Quantidade de números pares     |")
    print("| 04 - Quantidade de números primos    |")
    print("| 05 - Média dos números               |")
    print("| 06 - Sair                            |")
    print("+--------------------------------------+")
    menu = int(input())
    if menu == 1:
        while(voltarMenu != 0):
            print(f"Você digitou {contador} número(s)")
            voltarMenu = int(input("0 - voltar "))
    if menu == 2:
        while(voltarMenu != 0):
            print(f"Você digitou {verificaNegativo} número(s) negativo(s)")
            voltarMenu = int(input("0 - voltar "))
    if menu == 3: 
        while(voltarMenu != 0):
            print(f"Você digitou {verificaPar} par(es)")
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