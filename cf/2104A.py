from sys import stdin as i, stdout as o
 t=int(i.readline())
for _ in range(t):
    x,y,z=map(int,i.readline().split())
    sumdiv3=(x+y+z)//3
    if((x+y+z)%3==0 and x<=sumdiv3 and y<=sumdiv3 and z>=sumdiv3):
        if (sumdiv3-x + sumdiv3-y) <= z-sumdiv3:
            o.write("YES\n")
    else:
        o.write("NO\n")