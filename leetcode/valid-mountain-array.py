class Solution:
    def validMountainArray(self, arr: list[int]) -> bool:
        ilist = []
        dlist = []
        checker = []
        max = arr[0]
        prev = ''
        imax = 0
        for x in range(len(arr)):
            if arr[x] == prev:
                return False
            prev = arr[x]
            if arr[x] > max:
                max = arr[x]
                imax = x



        for x in range(0, imax):
            ilist.append(arr[x])
        for x in range(imax+1, len(arr)):
            dlist.append(arr[x])


        # Establish new list

        ilist.sort()
        dlist.sort(reverse=True)

        for x in ilist:
            checker.append(x)
        checker.append(max)
        for x in dlist:
            checker.append(x)

        if checker == arr and not len(ilist) == 0 and  not len(dlist) == 0:
            return True
        else:
            return False