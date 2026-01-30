import sys
q: list[tuple[int,int]] = []
  w, t = map(int, input().split())
s = list(input().strip())
for _ in range(t):
    for x in range(len(s)-1):
        if s[x] == 'B' and s[x+1] == 'G':
            q.append((x, x+1))
    for swap in q:
        temp = s[swap[0]]
        s[swap[0]] = s[swap[1]]
        s[swap[1]] = temp
    q = []        
for c in s:
    sys.stdout.write(c)
sys.stdout.write('\n')