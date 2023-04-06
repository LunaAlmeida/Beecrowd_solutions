import math
while True:
    numero = int(input())
    if numero == 0:
        break

    matriz = [[0 for i in range(numero)] for j in range(numero)]

    potencia = 0
    T = 0
    for i in range(0, numero):
        for j in range(0, numero):
            aux = math.pow(2, potencia)
            matriz[i][j] = int(aux)
            potencia += 1
            if aux > T:
                T = matriz[i][j]
        potencia = i + 1
    for i in range(0, numero):
        for j in range(0, numero):
            if j != numero - 1:
                print(f'{matriz[i][j]}'.rjust(len(str(int(T)))), end=' ')
            else:
                print(f'{matriz[i][j]}'.rjust(len(str(int(T)))))

    print()



