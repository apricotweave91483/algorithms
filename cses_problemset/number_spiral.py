
from sys import stdin, stdout
read = stdin.readline
out = stdout.write
for _ in range(int(input())):
    y, x = map(int,read().split())
    vert_coord = max(x,y)
    fv: int = -1
    vert_val = vert_coord**2 - (vert_coord - 1)
    if x == vert_coord and y == vert_coord:
        fv = vert_val
    elif x < vert_coord:
        if y & 1:
            fv = vert_val - (vert_coord - x)
        else:
            fv = vert_val + vert_coord - x
    elif y < vert_coord:
        if x & 1:
            fv = vert_val + (vert_coord - y)
        else:
            fv = vert_val - vert_coord + y
    print(fv)
 
