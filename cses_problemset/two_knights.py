from sys import stdin, stdout
read=stdin.readline
out=stdout.write

mxn = int(read())

for n in range(1, mxn+1):
    s = n**2
    a = s * (s - 1) // 2
    b = 0
    b += 8 * (n-4) * (n-4)
    b += 6 * (n-4) * 4
    b += 4 * (n-4) * 4 + 16
    b += 3 * 8
    b += 2 * 4
    b //= 2
    out(f'{a-b}\n')
