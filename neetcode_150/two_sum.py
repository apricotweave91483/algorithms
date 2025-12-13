n = list(map(int,input().split()))
t = int(input())

seen = dict()
ans = (-1,-1)

for x in range(len(n)):
	if (t-n[x]) in seen:
		ans = (seen[t-n[x]], x)
		break
	seen[n[x]] = x
print(ans)
