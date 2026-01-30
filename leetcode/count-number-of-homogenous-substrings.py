class Solution:
    def countHomogenous(self, s: str) -> int:
        c = 1
        o : ... = 0
        for x in range(1,len(s)):
            if s[x]!=s[x-1]:
                o += (c * (c+1))//2
                c = 1
            else:
                c += 1
        o += (c * (c+1))//2
        return o % (10**9 + 7)