t = int(input())
for _ in range(t):
    sum=0
    a, b = map(int, input().split())
    if a%2 == 0:
        sum+=a//(b-1)
        if a%(b-1):
            sum+=1
    else:
        a-=b
        sum += 1
        sum += a//(b-1)
        if a%(b-1) and a != 0:
            sum += 1
    print(sum)