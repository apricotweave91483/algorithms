x = int(input())
s = 0
sx = bin(x)
for n in sx:
    if n == '1':
        s += 1
print(s)