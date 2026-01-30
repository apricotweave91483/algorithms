from collections import Counter
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if(n<1):
            return False
        return (Counter(bin(n)))['1']==1