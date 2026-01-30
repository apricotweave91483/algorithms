from collections import Counter as counter
from sys import stdin, stdout, setrecursionlimit
from bisect import bisect_right, bisect_left
setrecursionlimit(2000)
 for _ in range(int(stdin.readline())):
    useless, x = map(int, stdin.readline().split())
    s = stdin.readline().strip()
    rev = s[::-1]
    true : bool = 0
    if x < 1 and rev > s:
        true = True
    elif x > 0 and len(counter(s)) > 1:
        true = True
    print("YES" if true else "NO")