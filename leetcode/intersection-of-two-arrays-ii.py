class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        finaloutput = []
        n1 = {}
        n2 = {}

        for x in nums1:
            if x in n1:
                n1[x] += 1
            else:
                n1[x] = 1

        master = n1

        for x in nums2:
            if x in n2:
                n2[x] += 1
            else:
                n2[x] = 1

        for x in n2:
            if x not in master:
                master[x] = n2[x]

        for x in master:
            if x in nums2 and x in nums1:
  
                if n2[x] > n1[x]:
   
                    for i in range(n1[x]):
                        finaloutput.append(x)
                elif n2[x] < n1[x]:

                    for z in range(n2[x]):
                        finaloutput.append(x)
                elif n2[x] == n1[x]:
                    for h in range(n2[x]):
                        finaloutput.append(x)

        return finaloutput