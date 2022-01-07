while(True):
    invalida = False

    nota1 = float(input())
    while ((nota1 > 10 )or (nota1 < 0)):
        print("nota invalida")
        nota1 = float(input())

    nota2 = float(input())
    while ((nota2 > 10) or (nota2 < 0)):
        print("nota invalida")
        nota2 = float(input())
    
    media = (nota1 + nota2) / 2

    print(f"media = {media:.2f}")

    print("novo calculo (1-sim 2-nao)")

    again = int(input())

    while(again != 1 and again != 2):
        print("novo calculo (1-sim 2-nao)")
        again = int(input())

    if again == 2:
        break    