X,Y = input().split(" ")
X = int(X)
Y = int(Y)

while (X > 0 and Y > 0):
    sum = 0
    if(X > Y):
        while(Y != X + 1):
            print(Y, end=" ")
            sum += Y
            Y += 1
            
    else:
        while(X != Y + 1):
            print(X, end=" ")
            sum += X
            X += 1
            
    print(f'Sum={sum}')
    X,Y = input().split(" ")
    X = int(X)
    Y = int(Y)