from sys import stdin, stdout

for _ in range(int(stdin.readline())):
    x, y = map(int, stdin.readline().split())
    if (x + y) % 3 == 0 and y <= (2 * x) and x <= (2 * y):
        stdout.write("YES\n")
    else:
        stdout.write("NO\n")
stdout.write('\n')
