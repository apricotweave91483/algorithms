class Solution:
    def countCharacters(self, words: list[str], chars: str) -> int:
        dw = {}
        fo = 0
        for char in chars:
            if char in dw:
                dw[char] += 1
            else:
                dw[char] = 1
        for x in words:
            brek = False
            d = {}
            for char in x:
                if char in d:
                    d[char] += 1
                else:
                    d[char] = 1
            for char in d:
                if char in dw:
                    pass
                else:
                    brek = True
                    break
            if brek != True:
                for char in d:
                    if d[char] <= dw[char]:
                        pass
                    else:
                        brek = True
                        break
            if brek != True:
                fo += len(x)
        return fo