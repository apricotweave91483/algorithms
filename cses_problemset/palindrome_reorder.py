
s = input()
co = {}
 
for c in s:
    if c in co:
        co[c] += 1
    else:
        co[c] = 1
 
od: ... = 0
 
for c in co:
    if co[c] & 1:
        od += 1
if od > 1:
    print("NO SOLUTION")
 
 
else:
    a = []
    fn = []
    for c in co:
        if not (co[c] & 1):
            for _ in range(co[c]//2):
                a.append(c)
                fn.append(c)
    for c in co:
        if co[c] & 1:
            for _ in range(co[c]):
                a.append(c)
            break
    for c in fn[::-1]:
        a.append(c)
    print("".join(a))
