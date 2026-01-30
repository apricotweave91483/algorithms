from bisect import bisect_left, bisect_right
from sys import stdin as i, stdout as o, setrecursionlimit
setrecursionlimit(2000)
 for _ in range(int(i.readline())):
    a, b, c, d = map(int, i.readline().split())
    if min(a, c) >= min(b, d):
        print("Gellyfish")
    else:
        print("Flower")