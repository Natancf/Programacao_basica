#Programa 6.9 do livro - Pesquisa sequencia
L = [15, 7, 27, 39]
p = int(input("Digite o valor a procurar: "))
v = int(input("Digite outro valor a procurar: "))
pachou = False
vachou = False
x = p1 = p2 = 0

while x < len(L):
    if L[x] == p:
        pachou = True
        p1 = x
    if L[x] == v:
        vachou = True
        p2 = x
    x += 1
if pachou and p1 <= p2:
    print(f"{p} que foi o primeiro número informado foi encontrado primeiro na posição {p1}")
elif pachou and p1 > p2:
    print(f"{p} que foi o primeiro número informado foi encontrado depois do {v} na posição {p1}")
else:
    print(f"{p} não encontrado")
if vachou and p2 <= p1:
    print(f"{v} que foi o segundo número informado foi encontrado primeiro na posição {p2}")
elif vachou and p2 > p1:
    print(f"{v} que foi o segundo número informado foi encontrado depois do {p} na posição {p2}")
else:
    print(f"{v} não encontrado")