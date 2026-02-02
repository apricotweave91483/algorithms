n, m, diff = map(int, input().split())
ppl = sorted(map(int, input().split()))
aps = sorted(map(int, input().split()))

person = 0
ap = 0

good = 0

while (person < n and ap < m):
    if abs(ppl[person] - aps[ap]) <= diff:
        good += 1
        person += 1
        ap += 1
    elif aps[ap] < ppl[person]:
        ap += 1
    elif ppl[person] < aps[ap]:
        person += 1
print(good)

