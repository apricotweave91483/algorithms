from bisect import bisect_left, bisect_right
from sys import stdin, stdout
stdin.readline()
arr = list(map(int, stdin.readline().split()))
arr.sort()
 for _ in range(int(stdin.readline())):
    ans = bisect_right(arr, int(stdin.readline()))
    stdout.write(f'{ans}\n')