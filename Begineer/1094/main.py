cases = int(input())
animal_total = 0
rabbit = 0
rat = 0
frog = 0

for i in range(0, cases):
    case = str(input())
    case = case.split(" ")
    number = int(case[0])
    animal_type = str(case[1])
    animal_total += number

    if animal_type == 'C':
        rabbit += number
    elif animal_type == 'R':
        rat += number
    elif animal_type == 'S':
        frog += number

perc_rabbit = (rabbit/animal_total)*100
perc_rat = (rat/animal_total)*100
perc_frog = (frog/animal_total)*100

print(f'Total: {animal_total} cobaias')
print(f'Total de coelhos: {rabbit}')
print(f'Total de ratos: {rat}')
print(f'Total de sapos: {frog}')
print(f'Percentual de coelhos: {perc_rabbit:.2f} %')
print(f'Percentual de ratos: {perc_rat:.2f} %')
print(f'Percentual de sapos: {perc_frog:.2f} %')

