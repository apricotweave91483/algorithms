class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        cnt=0
        for x in nums:
            count=0
            while x > 0:
                x//=10
                count += 1
            if(count%2==0):
                cnt+=1
        return cnt