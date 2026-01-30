t = int(input())
 for _ in range(t):
    a=int(input())
    l: list=list(map(int,input().split()))
    ctr1,ctr2=0,0
    s1,s2=0,0
    for x in range(0,len(l),2):
        s1+=l[x]
        ctr1 += 1
    for x in range(1, len(l), 2):
        s2+=l[x]
        ctr2 += 1
    if s1%ctr1==0 and s2%ctr2==0 and s1/ctr1 == s2/ctr2:
        print("YES")
    else:
        print('NO')