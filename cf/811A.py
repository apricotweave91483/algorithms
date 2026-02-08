from bisect import bisect_left
A, B = map(int, input().split())
ODDSUM = [N ** 2 for N in range(1, 35_000)]
EVENSUM = [N ** 2 + N for N in range(1, 35_000)]
I = bisect_left(ODDSUM, A)
J = bisect_left(EVENSUM, B)
if ODDSUM[I] > A:
    I -= 1
if EVENSUM[J] > B:
    J -= 1
print("Vladik" if I <= J else "Valera")

