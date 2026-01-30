def sum(s: int) -> int:
 return s%10 + (s//10)
 t=int(input())
for x in range(t):
 a=int(input())
 print(sum(a))