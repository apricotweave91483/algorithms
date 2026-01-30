class Solution:
    def mostCommonWord(self, paragraph: str, banned: list[str]) -> str:
        st = ''
        d = {}
        cond = False
        paragraph += ' '
        lowbanned = []
        for x in banned:
            for z in x:
                st += z.lower()
            lowbanned.append(st)
            st = ""
        for x in range(len(paragraph)):
            if paragraph[x].isalpha():
                cond = False
            if not paragraph[x].isalpha() and cond == False:
                cond = True
                if st in d:
                    d[st] += 1
                else:
                    d[st] = 1
                st = ''
            elif cond == False:
                st += paragraph[x].lower()
        num = 0
        for z in d:
            if d[z] >= num and z not in lowbanned:
                num = d[z]
                maxword = z
        return maxword