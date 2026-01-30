class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        current = nums[0]
        counter = 0
        for x in range(n):
            if(counter==0):
                current = nums[x]
            if(nums[x]==current):
                counter+=1
            else:
                counter-=1
        return current

        