cnt = [0] * 2001
inp = list(map(int,input().split()))

for x in inp: cnt[x+1000] += 1

k = int(input())

ans = [-1] * k

for i in range(k):
	a = None
	mxsofar = float('-inf')

	for x in range(len(cnt)):
		num = x - 1000
		cou = cnt[x]

		if cou > mxsofar:
			mxsofar = cou
			a = num
	
	cnt[a+1000] = float('-inf')
	ans[i] = a


print(ans)
