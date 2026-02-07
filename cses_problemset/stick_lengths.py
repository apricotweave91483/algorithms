N = int(input())
nums = sorted(map(int, input().split()))
med = nums[N // 2]
print(sum(abs(n - med) for n in nums))
