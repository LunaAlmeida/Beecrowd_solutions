num = int(input())

while(num != 0):
    i = 1
    while(i != num + 1):
        if(i != num):
            print(f'{i}', end=' ')
        else:
            print(i)
        i+=1
    num = int(input())


