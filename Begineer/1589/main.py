N = int(input())

while N != 0:
    R1, R2 = map(int, input().split())
    RaioTotal = R1 + R2
    N -= 1
    print(RaioTotal)

