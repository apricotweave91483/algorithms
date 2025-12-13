n = int(input())

if n < 3:
    print("NO")
else:
    if n * (n + 1) % 4 == 0:
        a = []
        b = []
        pairs = []
        if n & 1:
            a.append(1)
            a.append(2)
            b.append(3)
           
            for x in range(4, (n + 5) // 2):
                pairs.append((x, (n-x+4)))

        else:
            for x in range(1, n // 2 + 1):
                pairs.append((x,(n-x+1)))
        for x in range(len(pairs)):
            if x & 1:
                a.append(pairs[x][0])
                a.append(pairs[x][1])
            else:
                b.append(pairs[x][0])
                b.append(pairs[x][1])
        print(len(a))
        for x in a:
            print(x, end=' ')
        print(f'\n{len(b)}')
        for x in b:
            print(x, end=' ')
        print()

    else: print("NO")
