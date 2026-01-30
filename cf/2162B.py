from sys import stdout as o
 for __ in range(int(input())):
    n = int(input())
    s = input()
    cn = 0
    ans = []
    for x in range(len(s)):
        if s[x] == '1':
            cn += 1
            ans.append(x+1)
    print(cn)
    for x in ans:
        o.write(f'{x} ')
    o.write('\n')