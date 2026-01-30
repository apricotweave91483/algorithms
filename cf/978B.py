from sys import stdin, stdout
read = stdin.readline
out = stdout.write
 ctr = 0
r = int(read())
s = read().strip()
 for x in range(len(s)-2):
    if(s[x] == 'x' and s[x+1] == 'x' and s[x+2] == 'x'):
        ctr += 1
out(f"{ctr}\n")