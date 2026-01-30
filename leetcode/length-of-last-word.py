class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count = 0
        for x in range(len(s)-1, 0-1, -1):
            if s[x] != ' ':
                count += 1
                if s[x-1] == ' ':
                    break
        return count