class Solution:
    def repeatedNTimes(self, nums: list[int]) -> int:
        c = {}
        for x in nums:
            if x in c:
                c[x] += 1
            else: 
                c[x] = 1
        for x in c:
            if c[x]*2 == len(nums):
                return x