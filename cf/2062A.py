from sys import stdin as i, stdout as o
 t=int(i.readline())
for _ in range(t):
    sum=0
    s=i.readline()
    for c in s:
        if c == '1':
            sum+=1
    print(sum)