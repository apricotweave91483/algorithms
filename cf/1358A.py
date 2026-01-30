from sys import stdin as si, stdout as so
 t=int(si.readline())
for _ in range(t):
    x,y=map(int, si.readline().split())
    so.write(f'{((x*y)//2) + ((x*y)%2)}\n')