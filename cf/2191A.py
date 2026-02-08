for _ in range(int(input())):
    N = int(input())
    nums = tuple(map(int, input().split()))
    good = 1
    for i in range(N - 1):
        if (nums[i] & 1) == (nums[i + 1] & 1):
            good = 0
            break
    print("YES" if good else "NO")
        
