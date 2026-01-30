class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        sr = ""
        ar = ""
        fs = ""
        fa = ""
        for x in range(len(s)-1, -1, -1):
            sr +=s[x]
        for x in range(len(t)-1,-1,-1):
            ar += t[x]
        skip = 0
        for char in sr:
            if char == "#":
                skip += 1
            else:
                if skip == 0:
                    fs += char
                if skip > 0:
                    skip -= 1
        skip = 0
        for char in ar:
            if char == "#":
                skip += 1
            else:
                if skip == 0:
                    fa += char
                if skip > 0:
                    skip -= 1
        if fa == fs:
            return True
        return False