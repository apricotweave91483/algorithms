class Solution:
    def isPalindrome(self, x: int) -> bool:
        a = str(x)
        for i in range(len(a)//2):
            if a[i] == a[(len(a)-1)-i]: pass
            else: return False
        return True