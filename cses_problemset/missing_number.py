n = int(input())
s = sum(map(int,input().split()))
print((n * (n+1) // 2) - s)
