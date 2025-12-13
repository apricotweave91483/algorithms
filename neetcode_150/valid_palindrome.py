s = input()

p1 = 0
p2 = len(s) - 1

good : bool = True


while (p2 > p1):
	c1 = s[p1]
	c2 = s[p2]

	if c1.isalnum() and c2.isalnum():
		if not (c1.lower() == c2.lower()):
			good = False
			break

		p2 -= 1
		p1 += 1
	elif c1.isalnum():
		p2 -= 1
	elif c2.isalnum():
		p1 += 1
	else:
		p2 -= 1
		p1 += 1

print(good)
			
