class Solution:
    def romanToInt(self, s: str) -> int:
        total = 0
        tr = []
        for x in s:
            if x == "I":
                tr.append(1)
            elif x == "V":
                tr.append(5)
            elif x == "X":
                tr.append(10)
            elif x == "L":
                tr.append(50)
            elif x == "C":
                tr.append(100)
            elif x == "D":
                tr.append(500)
            else:
                tr.append(1000)
        iterations = 0
        for x in range(0, len(tr)):
            m = 0
            if iterations == 0:
                m = tr[0]
                iterations += 1
            elif tr[x-1] < tr[x]:
                m = tr[x]-tr[x-1]-tr[x-1]
            else:
                m = tr[x]
            total += m


        return total