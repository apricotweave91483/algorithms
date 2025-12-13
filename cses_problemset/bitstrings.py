mod = 1e9 + 7
mod = int(mod)

f = 1
for _ in range(int(input())):
    f = (2 * f) % mod
print(f)
