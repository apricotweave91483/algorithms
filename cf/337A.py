from sys import stdin, stdout
read=stdin.readline
out=stdout.write
 mn = float('inf')
 w, v = map(int, read().split())
arr = list(map(int, read().split()))
 arr = sorted(arr)
 for x in range(v-w+1):
   mn=min((arr[x+w-1]-arr[x]), mn)
 print(mn)