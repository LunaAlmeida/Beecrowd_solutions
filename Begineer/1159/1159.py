while(True):
    num = int(input())
    sum = 0
    count = 5
    if num == 0:
        break

    while count != 0:
        if(num % 2 == 0):
            count -= 1
            sum += num
            num += 2
        else:
            num += 1
    print(sum)


