from sys import stdin, stdout
read = stdin.readline
out = stdout.write
 dt = {}
 for _ in range(int(read())):
    s = read().strip()
    if s in dt:
        dt[s] += 1
    else:
        dt[s] = 1
mx = float('-inf')
mxstr = ""
for x in dt:
    if dt[x] > mx:
        mx = dt[x]
        mxstr = x
out(mxstr)
out('\n')