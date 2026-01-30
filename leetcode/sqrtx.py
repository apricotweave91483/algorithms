import math
class Solution:
    def mySqrt(self, x: int) -> int:
        ans = x**(0.5)
        return math.trunc(ans)