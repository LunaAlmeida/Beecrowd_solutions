L = int(input())
T = str(input())
M = [[0 for i in range(12)] for j in range(12)]
soma = 0
media = 0
for i in range(0, 12):
    for j in range(0, 12):
        M[i][j] = float(input())
        


if T == 'S':
    for i in range(0, 12):
        soma = soma + M[i][L]
    print(f'{soma:.1f}')
else:
    for i in range(0, 12):
        soma = soma + M[i][L]
    Media = soma / 12
    print(f'{Media:.1f}')




