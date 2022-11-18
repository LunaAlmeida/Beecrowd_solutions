from math import floor
T = int(input())
for e in range(T):
    anos = 0
    PA, PB, G1, G2 = input().split(" ")
    PA = int(PA)
    PB = int(PB)
    G1 = float(G1)
    G2 = float(G2)
    while PA <= PB:
        PA += PA*(G1/100)
        PA = floor(PA)
        PB += PB*(G2/100)
        PB = floor(PB)
        anos += 1
        if anos > 100:
            print("Mais de 1 seculo.")
            break
    if anos < 100:
        print("%d anos." % anos)