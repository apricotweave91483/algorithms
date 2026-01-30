class Solution:
    def commonChars(self, words: list[str]) -> list[str]:
        fo = []
        fd = {}

        for x in words[0]:
            if x in fd:
                fd[x] += 1
            else:
                fd[x] = 1

        for word in words:
            d = {}
            for char in word:
                if char in d:
                    d[char] += 1
                else:
                    d[char] = 1

            for key in fd:
                if key not in d:
                    fd[key] = 0

            for key in d:
                if key in fd:
                    if fd[key] > d[key]:
                        fd[key] = d[key]

        for x in fd:
            for z in range(fd[x]):
                fo.append(x)
        return fo
