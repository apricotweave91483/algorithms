from sys import stdin, stdout
read=stdin.readline
out=stdout.write
 w, v = map(int, read().split())
arr = list(map(int,read().split()))
arr = sorted(arr)
mx1 = arr[0]
mx2 = v-arr[-1]
mx = float('-inf')
for x in range(len(arr)-1):
    mx = max((arr[x+1]-arr[x]), mx)
print(max(mx1,mx2,(mx/2)))