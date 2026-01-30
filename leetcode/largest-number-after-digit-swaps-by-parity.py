class Solution:
    def largestInteger(self, num: int) -> int:
        oc = 0
        ec = 0

        nums = []
        the = str(num)

        fn = ''
        n2 = []

        elist = []
        olist = []

        for x in range(len(the)):
            nums.append(the[x])
            n2.append(the[x])

        for x in range(len(n2)):
            if int(n2[x]) % 2 == 0:
                n2[x] = "e"
            else:
                n2[x] = "o"

        for x in nums:
            if int(x) % 2 == 0:
                elist.append(x)
            else:
                olist.append(x)
    
        elist.sort(reverse=True)
        olist.sort(reverse=True)

        for x in range(len(n2)):
            if n2[x] == 'e':
                n2[x] = elist[ec]
                ec += 1
            elif n2[x] == 'o':
                n2[x] = olist[oc]
                oc += 1

        for x in n2:
            fn += x
        return int(fn)