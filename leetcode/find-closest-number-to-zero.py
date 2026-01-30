class Solution:
    def findClosestNumber(self, nums: list[int]) -> int:


        nlist = []
        plist = []

        for x in nums:
            if x == 0:
                return x
            elif x > 0:
                plist.append(x)
            elif x < 0:
                nlist.append(x)

        nlist.sort()
        plist.sort()

        if plist == []:
            return nlist[len(nlist)-1]
        elif nlist == []:
            return plist[0]
        else:
            if plist[0] == (nlist[len(nlist)-1]) * -1:
                return plist[0]

            elif plist[0] > (nlist[len(nlist)-1]) * -1:
                return nlist[len(nlist)-1]

            else:
                return plist[0]