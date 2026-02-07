X = [(n * (n + 1)) // 2 for n in range(1, 44722)]
DT = {x : 1 for x in X}
N = int(input())
for x in X:
    if N - x in DT:
        print("YES")
        exit()
print("NO")
