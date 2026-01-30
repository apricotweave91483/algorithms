from sys import stdin as i, stdout as o
t=int(i.readline())
for _ in range(t):
    fo=""
    x=list(map(str, i.readline().split()))
    for word in x:
        fo+=word[0]
    o.write(f'{fo}\n')