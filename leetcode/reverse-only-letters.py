class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        clist = []
        rclist = []
        elist = []
        cop = []
        for z in s:
            if z.isalpha():
                clist.append(z)
                cop.append("is A Character")
            else:
                elist.append(z)
                cop.append("is Not A Character")
        for x in range(len(clist)-1, -1, -1):
            rclist.append(clist[x])
        cind = 0
        eind = 0
        for x in range(len(cop)):
            if cop[x] == "is A Character":
                cop[x] = rclist[cind]
                cind += 1
            else:
                cop[x] = elist[eind]
                eind += 1

        fo = ''
        for x in cop:
            fo += x

        return fo