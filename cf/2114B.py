from sys import stdin, stdout
from collections import Counter
for _ in range(int(stdin.readline())):
    i, k = map(int, stdin.readline().split())
    cnt = Counter(list(map(int, stdin.readline().strip())))
    for _ in range(k):
        if cnt[1] > cnt[0]:
            cnt[1] -= 2
        else:
            cnt[0] -= 2
        if cnt[1] == cnt[0] and cnt[1] > -1:
        print("YES")
    else:
        print("NO")
        