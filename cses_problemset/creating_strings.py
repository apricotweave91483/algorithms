from collections import Counter
from math import factorial

S = list(input())
CNT = Counter(S)
X = factorial(sum([CNT[x] for x in CNT]))

for x in CNT:
    X //= factorial(CNT[x])

def np(s: list):
    i = -1
    for x in range(len(s) - 1):
        if s[x] < s[x + 1]:
            i = x
    j = -1
    for x in range(i + 1, len(s)):
        if s[x] > s[i]:
            j = x
    s[i], s[j] = s[j], s[i]
    s[i + 1:] = s[i + 1:][::-1]

S.sort()

print(X)
for _ in range(X):
    print("".join(S))
    np(S)

