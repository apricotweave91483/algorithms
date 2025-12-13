import sys
 
n = int(input())
p = [[0], [1]]
for _ in range(n-1):
    o = p[::-1]
    for z in range(len(o)):
        x = [1]
        for y in o[z]:
            x.append(y)
        o[z] = x
    for z in range(len(p)):
        x = [0]
        for y in p[z]:
            x.append(y)
        p[z] = x
    p = p + o
 
for l in p:
    for c in l:
        sys.stdout.write(f'{c}')
    sys.stdout.write('\n')
