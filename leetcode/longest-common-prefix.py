class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        count = 0
        condition = False
        prefix = ''
        bek = False
        while True:
            if bek == True:
                break
            for w in range(len(strs)):
                if count >= len(strs[w]):
                    bek = True


            if not bek:
                char = strs[0][count]
                for y in range(len(strs)):
                    if strs[y][count] != char:
                        condition = True
                        break
                if condition == True:
                    break
                prefix += strs[0][count]
                count += 1

        return prefix