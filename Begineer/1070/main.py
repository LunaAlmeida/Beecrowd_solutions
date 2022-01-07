number = int(input())

for i in range(0, 6):
    if((number % 2) != 0):
        print(number)
    else:
        print(number + 1)
    number += 2