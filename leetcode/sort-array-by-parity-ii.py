class Solution(object):
    def sortArrayByParityII(self, nums):
        pe=0
        po=1
        lst = [None]*len(nums)
        for num in nums :
            if num % 2==0:
                lst[pe]=num
                pe+=2
            else :
                lst[po]=num
                po+=2
        return lst