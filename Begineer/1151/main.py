num = int(input())

i = 0
aux = 0
aux_1 = 0
aux_2 =  1

for i in range(1, num):
    if (i == 1):
        print(f'{aux_1} {aux_2}', end=' ')
        aux = aux_1 + aux_2

    if((i >= 2) and (i <= (num -2))):
        print(f'{aux}', end=' ')
        aux_1 = aux_2
        aux_2 = aux
        aux = aux_1 + aux_2
    elif(i >= num - 2):
        print(f'{aux}')
    i += 1