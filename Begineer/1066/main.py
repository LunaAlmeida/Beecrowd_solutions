numbers = []

even = 0
odd = 0
positive = 0
negative = 0

for i in range(0, 5):
    numbers.append(int(input()))
    if((numbers[i] % 2) == 0):
        even += 1
    elif((numbers[i] % 2) != 0):
        odd += 1

    if(numbers[i] > 0):
        positive +=1
    elif(numbers[i] < 0):
        negative += 1

print(f'{even} valor(es) par(es)')
print(f'{odd} valor(es) impar(es')  
print(f'{positive} valor(es) positivo(s)')  
print(f'{negative} valor(es) negativo(s)')      
