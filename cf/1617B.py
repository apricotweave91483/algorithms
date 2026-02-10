oddprimes = [3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
for _ in range(int(input())):
    N = int(input())
    C = 1
    for prime in oddprimes:
        A = prime
        B = N - prime - 1
        if B % A != 0:
            break
        
    print(A, B, C)
 
 
