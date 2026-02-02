n, toomuch = map(int, input().split())
kids = sorted(map(int, input().split()))

tot = 0

l, r = 0, n - 1

while l < r:
    if kids[l] + kids[r] <= toomuch:
        tot += 1
        l += 1
        r -= 1
    else:
        tot += 1
        r -= 1
tot += 1 if l == r else 0
print(tot)

