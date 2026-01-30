from sys import stdin as i, stdout as o
t=int(i.readline())
for _ in range(t):
    mx=int(i.readline())
    mn=1
        s=i.readline()
    arr=[]
    for x in range(len(s)-2,-1,-1):
        if(s[x]=='<'):
            arr.append(mn)
            mn+=1
        elif(s[x]=='>'):
            arr.append(mx)
            mx-=1
    o.write(f'{mx}')
    for x in range(len(arr)-1,-1,-1):
        o.write(f' {arr[x]}')
    o.write('\n')