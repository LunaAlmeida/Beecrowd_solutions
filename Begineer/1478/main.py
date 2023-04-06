N = 1

while(N != 0):
    N = int(input())
    matriz = [[0 for i in range(N)] for j in range(N)]
    if N > 0:
        for i in range(0, N):
            for j in range(0, N):
                aux = 0
                if i == 0:
                    aux = j + 1
                
                if j == 0:
                    aux = i + 1
                
                if (i > 0) and (j > 0):
                    if (j <= i):
                        aux = matriz[i][j - 1] - 1
                    else:
                        aux = matriz[i][j - 1] + 1
            
                matriz[i][j] = aux
                if (j != N - 1):
                    print(f'{matriz[i][j]:>3}', end=" ")
                else:
                    print(f'{matriz[i][j]:>3}')