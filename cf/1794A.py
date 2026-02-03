def ispal(s):
    return s == s[::-1]
for _ in range(int(input())):
    n = int(input())
    good = 0
    if n & 1 ^ 1:
        s1, s2 = (s for s in input().split() if len(s) == n // 2)
    else:
        s1, s2 = (s for s in input().split() if len(s) == n // 2 + 1)
    if ispal(s1 + s2) or ispal(s2 + s1):
        good = 1

    print("YES" if good else "NO")
