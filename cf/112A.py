s=input()
s2=input()
 dct={}
abc="abcdefghijklmnopqrstuvwxyz"
for x in range(len(abc)):
    dct[abc[x]]=x
good=True
for x in range(len(s)):
    if s[x].lower() != s2[x].lower():
        good=False
        if dct[s[x].lower()] > dct[s2[x].lower()]:
            print(1)
            break
        else:
            print(-1)
            break
 if good:
    print(0)