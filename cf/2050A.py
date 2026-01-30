t = int(input())
for _ in range(t):
    a,b=map(int,input().split())
    sum: int = 0
    for __ in range(a):
        s: str = input()
        b-=len(s)
        if b>=0:
            sum += 1
    print(sum)