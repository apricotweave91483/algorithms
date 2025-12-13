input()
nums = list(map(int,input().split()))
ans = []
curr = []
def dfs(i):
    if i >= len(nums):
        ans.append(curr.copy())
        return

    curr.append(nums[i])
    dfs(i + 1)

    curr.pop()
    dfs(i + 1)

dfs(0)

tot = sum(nums)
sms = [sum(a) for a in ans]
mn = float('inf')
for x in sms:
    a = (abs(2*x - tot))
    mn = min(a,mn)
print(mn)
