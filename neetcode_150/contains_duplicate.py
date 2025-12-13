from collections import Counter

ans : bool = False

for x in Counter(input().split()).values():
	if x > 1:
		ans = True
		break

print(ans)
