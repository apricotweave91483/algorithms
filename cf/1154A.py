n = list(map(int,input().split()))
mx = max(n)
for x in n:
    if x != mx:
                print(mx - x, end = ' ')