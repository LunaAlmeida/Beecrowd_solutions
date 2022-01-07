# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

salary = float(input())

if (salary <= 400.00 and salary > 0):
    percentual = 15
elif (salary > 400.00 and salary <= 800):
    percentual = 12
elif (salary >= 800.01 and salary <= 1200.00):
    percentual = 10
elif (salary >= 1200.01 and salary <= 2000.00):
    percentual = 7
else:
    percentual = 4

readjustment = salary * (percentual / 100)
newSalary = salary + readjustment

print(f'Novo salario: {newSalary:.2f}')
print(f'Reajuste ganho: {readjustment:.2f}')
print(f'Em percentual: {percentual} %')
