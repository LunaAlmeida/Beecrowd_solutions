while True:
    try:
        N = int(input())

        if(N >= 3 & N <70):
            matriz = [[0 for i in range(N)] for j in range(N)]

            for i in range(0, N):
                for j in range(0, N):
                    if (i == j) & ((i + j) != (N - 1)):
                        matriz[i][j] = 1
                    elif (i + j) == (N - 1):
                        matriz[i][j] = 2
                    else:
                        matriz[i][j] = 3

        for i in range(0, N):
            for j in range(0, N):
                print(matriz[i][j], end='')
            print()
    except EOFError:
        break