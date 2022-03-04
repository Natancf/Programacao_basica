# Exercício 6.7
parentese = 0
verifica_parentese = [parentese]
teste = 0
parar = False

while not parar:
    parenteses = input()
    lista = []
    lista = list(parenteses)
    x = len(lista)
    for i in range(x):
        if lista[i] == '(' or lista[i] == ')':
            teste+=1
            if teste == len(lista):
                for x in range(len(lista)):
                    if lista[x] == '(':
                        verifica_parentese.append(parentese)
                        parentese += 1
                    if lista[x] == ')':
                        verifica_parentese.pop(-1)
                if len(verifica_parentese):
                    print("Ok")
                    parar = True
                else:
                    print("Erro")
                    parar = True
        else:
            print("Valor inserido é invalido, digite \"(\" ou \")\"")
            lista.clear()