T = int(input())

def fibonacci(numero):
    a = 0
    b = 1

    if numero == 0:
        return a
    if numero == 1:
        return b

    for i in range(numero - 1):
        res = a + b
        a = b
        b = res
        
    return res
while T != 0:
    T -= 1
    numero = int(input())
    print(f'Fib({numero}) = {fibonacci(numero)}')
