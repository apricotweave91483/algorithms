class Solution:
    def sortEvenOdd(self, nums):
        eind = []
        oind = []

        finaloutput = []

        for x in range(len(nums)):
            if x % 2 == 0:
                eind.append(nums[x])
            else:
                oind.append(nums[x])



        eind.sort()
        oind.sort(reverse=True)

        if len(oind) == len(eind):
            for x in range(len(eind)):
                finaloutput.append(eind[x])
                finaloutput.append(oind[x])
        else:
            for x in range(len(oind)):
                finaloutput.append(eind[x])
                finaloutput.append(oind[x])
            finaloutput.append(eind[len(eind)-1])

        return finaloutput