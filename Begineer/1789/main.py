while True:
    try:
        L = int(input())
        V = input()
        V = V.split()
        slugs = [eval(x) for x in V] #transforma lista string em int
        max_vel = slugs[0]

        for i in slugs:
            if i > max_vel:
                max_vel = i
        if max_vel < 10:
            print(1)
        elif max_vel >= 10 & max_vel < 20:
            print(2)
        else:
            print(3)
    except EOFError:
        break