import sys
for _ in range(int(sys.stdin.readline())):
    x = int(sys.stdin.readline())
    found : bool = False
    for y in range(100):
        if y * y == x:
            found = True
            square_root = y
            break
    if not found:
        print(-1)
    else:
        if square_root % 2 == 0:
            print(f'{square_root // 2} ' * 2)
        else:
            print((square_root // 2), ((square_root//2) + 1))