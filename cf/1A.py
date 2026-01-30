from sys import stdin, stdout
from math import ceil
read=stdin.readline
out=stdout.write
 w, v, z = map(int, read().split())
 print(ceil(w/z) * ceil(v/z))