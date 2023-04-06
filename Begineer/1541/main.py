import math

while True:
    valores = input()
    if valores == '0':
        break
    else:
        A, B, C = valores.split()
        A = int(A)
        B = int(B)
        C = int(C)
        area = A * B
        total = (area * 100 )/ C
        lado = math.sqrt(total)
        print(int(math.floor(lado)))
