#!/opt/homebrew/bin/python3

L = int(input())
NUMS = list(map(int, input().split()))
N = sum(NUMS)

ANS = float("inf")

for x in range(2 ** L):
    b = format(x, f"0{L}b")
    
    SU = 0
    for i in range(L):
        if b[i] == "1":
            SU += NUMS[i]
    ANS = min(abs(2 * SU - N), ANS)

print(ANS)



