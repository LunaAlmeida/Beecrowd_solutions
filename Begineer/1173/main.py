number = int(input())
N = []

for i in range(10):
    if(i == 0):
        N.append(number)
    else:
        N.append(N[i -1] * 2)
    print(f"N[{i}] = {N[i]}")