class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        prev = nums[0] - 1
        count = 0
        for x in range(len(nums)):
            if nums[x] > prev:
                nums[count] = nums[x]
                prev = nums[count]
                count += 1
        return count