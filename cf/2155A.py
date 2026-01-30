from sys import stdin, stdout
from math import ceil
 t = int(input())
for ___ in range(t):
    n = int(stdin.readline())
    x = 0
    s = 0
    iter = 0
     while True:
         if iter == 0:
            if n != 1:
                x = n - ceil(n/2)
                s += n//2
                n = ceil(n/2)
                        else:
            if x != 1:
                s += x//2
                x = ceil(x/2)
                            if n != 1:
                x += n - ceil(n/2)
                s += n//2
                n = ceil(n/2)
                               if n == 1 and x == 1:
            s += 1
            break
                       iter += 1
       stdout.write(f'{s}\n')