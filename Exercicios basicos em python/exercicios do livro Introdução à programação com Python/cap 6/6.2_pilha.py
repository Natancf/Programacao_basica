# Programa 6.8 do livro - Pilha de pratos
prato = 10
pilha = list(range(1, prato + 1))
x = len(pilha)
while True:
    print(f"\nExistem {len(pilha)} pratos na pilha")

    x = len(pilha)
    print("Pilha atual:",end=" ")
    for i in range(x):
        print(f"prato {i+1}, " if i < x-1 else f'prato {i+1}', end='')

    print("\nDigite E para empilhar um novo prato,",
    "ou D para desempilhar. S para sair.")
    operacao = input("Operação (E, D ou S):")

    if operacao == "D" or operacao == "d":
        if len(pilha) > 0:
            lavado = pilha.pop(-1)
            print(f"Prato {lavado} lavado")
            i = 0
        else:
            print("Pilha vazia! Nada para lavar.")
    elif operacao == "E" or operacao == "e":
        prato += 1  # Novo prato
        pilha.append(prato)
    elif operacao == "S" or operacao == "s":
        break
    else:
        print("Operação inválida! Digite apenas E, D ou S!")