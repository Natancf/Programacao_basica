# programa 6.7 do livro - Simulação de uma fila de banco
ultimo = 10
fila = list(range(1, ultimo+1))
x = len(fila)
i=1
while True:
    print(f"\nExistem {len(fila)} clientes na fila")
    x=len(fila)
    print("Fila atual:",end=" ")
    for i in range(x):
        print(f"cliente {i+1}, " if i < x-1 else f'cliente {i+1}', end='')

    print("\nDigite F para adicionar um cliente ao fim da fila,", 
            "ou A para realizar o atendimento. S para sair.")
    operacao = input("Operação (F, A ou S):")
    if operacao == "A" or operacao == "a":
        if len(fila) > 0:
            atendido = fila.pop(0)
            print(f"Cliente atendido")
            i=1
        else:
            print("Fila vazia! Ninguém para atender.")
    elif operacao == "F" or operacao == "f":
        ultimo += 1  # Incrementa o ticket do novo cliente
        fila.append(ultimo)
    elif operacao == "S" or operacao == "s":
        break
    else:
        print("Operação inválida! Digite apenas F, A ou S!")
    x+=1
print("\nTodos os clientes foram atendidos")