class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        count = {}
        for x in nums:
            if x in count:
                count[x] += 1
            else:
                count[x] = 1
        for x in count:
            if count[x] != 2:
                return x