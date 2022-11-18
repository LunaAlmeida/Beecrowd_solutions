O = str(input())
M = [[0 for i in range(12)]for j in range(12)]
soma = 0
media = 0

for i in range(0, 12):
    for j in range(0, 12):
        M[i][j] = float(input())
        if ((i+1 )+ (j+1)) <= 12:
            soma += M[i][j]

if O == 'S':
    print(f'{soma:.1f}')
else:
    media = soma / 66
    print(f'{media:.1f}')