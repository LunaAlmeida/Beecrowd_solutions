def calculate_factor(number):
    values = []

    aux = 1
    i = 1
    while number != i:
        if (number % i) == 0:
            aux = aux * i
            values.append(i)
        i += 1
    return values

quantity = int(input())

while quantity != 0:
    quantity -= 1
    number = int(input())

    values = calculate_factor(number)
    
    sum = 0
    for i in range(len(values)):
        sum = sum + values[i]

    if sum == number:
        print(f'{number} eh perfeito')
    else:
        print(f'{number} nao eh perfeito')

