num = []
for i in range(0, 15):
    num.append(int(input()))

par = []
impar = []

for i in range(0, len(num)):
    if((num[i] % 2) == 0):
        if(len(par) < 5):
            par.append(num[i])
        else:
            for j in range(0, len(par)):
                print(f"par[{j}] = {par[j]}")
            par = []
            par.append(num[i])

    if((num[i] % 2) != 0):
        if((len(impar) < 5)):
            impar.append(num[i])
        else:
            for j in range(0, len(impar)):
                print(f"impar[{j}] = {impar[j]}")
            impar = []
            impar.append(num[i])

for j in range(0, len(impar)):
    print(f"impar[{j}] = {impar[j]}")

for j in range(0, len(par)):
    print(f"par[{j}] = {par[j]}")

