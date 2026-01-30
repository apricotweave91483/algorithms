for _ in range(int(input())):
    input()
    ones = sum(map(int,s := input()))
    sm: int = 0
    for c in s:
        sm += ones
        sm += -1 if c == '1' else 1
    print(sm)