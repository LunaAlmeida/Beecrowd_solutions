I = 1
J = 7
count = 0
flag = True
while I != 11:
    print(f'I={I} J={J}')
    J -= 1
    count += 1
    if(count == 3):
        I += 2
        J += 5
        count = 0