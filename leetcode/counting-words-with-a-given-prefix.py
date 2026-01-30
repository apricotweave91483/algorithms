class Solution:
    def prefixCount(self, words: list[str], pref: str) -> int:
        iword = []
        plist = []
        for i in pref:
            plist.append(i)

        finaloutput = 0

        for x in words:
            iword = []
            for i in x:
                iword.append(i)
                if iword == plist:
                    finaloutput += 1
                    break
        return finaloutput