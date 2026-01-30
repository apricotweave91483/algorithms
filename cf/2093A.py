from sys import stdin, stdout, setrecursionlimit
from bisect import bisect_right, bisect_left
setrecursionlimit(2000)
  for _ in range(int(input())):
    print("YES" if int(input()) & 1 else "NO")