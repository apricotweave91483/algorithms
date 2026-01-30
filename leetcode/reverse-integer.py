import math
class Solution:
    def reverse(self, x: int) -> int:
        neg = False
        if x < 0:
            neg = True
            x*=-1
        t = x
        count = 0
        fo = 0
        while x!= 0:
            count+=1
            temp = x%10
            x -= temp
            x/=10
            print(temp)
        while t!=0:
            temp = t % 10
            fo+= temp*(10**(count-1))
            t -= temp
            t /= 10
            count-=1
        if fo < -2147483648 or fo > 2147483647:
            return 0
        if neg:
            return -1*math.trunc(fo)
        return math.trunc(fo)

