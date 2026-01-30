from sys import stdin, stdout
read=stdin.readline
out=stdout.write
 t = int(read())
 for _ in range(t):
    w = int(read())
    if w % 2 == 1:
        print("NO")
    else:
        s = ''
        for x in range(w//2):
            if x % 2 == 0:
                s += 'AA'
            else:
                s += 'BB'
        print("YES")
        print(s)