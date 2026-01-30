class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:

        eind = []
        oind = []

        for x in nums:
            if x % 2 == 0:
                eind.append(x)
            else:
                oind.append(x)

        finaloutput = [None] * (len(eind) + len(oind))

        for x in range(len(eind)):
            finaloutput[x] = eind[x]

        for x in range(len(oind)):
            finaloutput[len(eind)+x] = oind[x]

        return finaloutput