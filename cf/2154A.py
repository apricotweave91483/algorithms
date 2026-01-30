for _ in range(int(input())):
    n, k = map(int,input().split())
    s = input()
        distances = []
    first1 = None
    for x in range(len(s)):
        if s[x]=='1':
            first1 = x
            break
    sofar = 0
    if first1 != None:
        for x in range(first1 + 1, len(s)):
            if s[x] == '1':
                distances.append(sofar)
                sofar = 0
            else:
                sofar += 1
      cnt = 0
    if distances:
        for x in distances:
            cnt += 1 if x >= (k-1) else 0
    if first1 != None:
        cnt += 1
     print(cnt)