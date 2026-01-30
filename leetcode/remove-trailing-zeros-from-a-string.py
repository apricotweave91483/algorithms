class Solution:
    def removeTrailingZeros(self, num: str) -> str:
        fo = ""
        for x in range(len(num)):
            if num[x] != '0':
                ind = x
        if ind == len(num)-1:
            return num
        for x in range(0, ind+1):
            fo += num[x]
        return fo