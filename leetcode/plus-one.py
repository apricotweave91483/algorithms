class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        fo = []
        num = ''
        for z in digits:
            num += str(z)
        numc = int(num) + 1
        for i in str(numc):
            fo.append(int(i))
        return fo