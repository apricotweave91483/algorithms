class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        a = []
        for x in nums:
            a.append(x**2)
        a.sort()
        return a