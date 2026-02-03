from collections import Counter
for _ in range(int(input())):
    input()
    C = Counter(input().split())
    ans = sum(1 for key in C if C[key] == 2)
    print(ans)

