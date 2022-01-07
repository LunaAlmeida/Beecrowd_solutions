number = []
positive = 0
i = 0
average = 0

for i in range(0, 6):
    number.append(float(input()))
    if(number[i] > 0):
        positive += 1
        average += number[i]

average = average / positive

print(f'{positive} valores positivos')
print(f'{average:.1f}')