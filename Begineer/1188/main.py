M = [[0 for i in range (12)] for j in range(12)]
O = str(input())
soma = 0

for i in range(0, 12):
    for j in range(0, 12):
        M[i][j] = float(input())

        if(i > j and not(((i+1 )+ (j+1)) <= 12+1)):
            soma = soma + M[i][j]
    



if O == 'S':
    print(soma)
else:
    media = soma/30
    print(media)