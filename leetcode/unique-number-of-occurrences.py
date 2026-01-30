class Solution:
    def uniqueOccurrences(self, arr: list[int]) -> bool:
        d = {}
        for x in arr:
            if x in d:
                d[x] += 1
            else:
                d[x] = 1
        counts = []
        for x in d:
            counts.append(d[x])
        countscounts = {}
        for x in counts:
            if x in countscounts:
                countscounts[x] +=1
            else:
                countscounts[x] = 1
        for x in countscounts:
            if countscounts[x] > 1:
                return False
        return True
