class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        if numRows == 1:
            return [[1]]
        elif numRows == 2:
            return [[1], [1, 1]]
        fo = [[1], [1, 1]]
        prev = [1, 1]

        for x in range(3, numRows+1):
            count = 0
            third = [None] * (len(prev) + 1)
            third[0], third[len(third) - 1] = 1, 1
            for z in range(len(third)):
                if third[z] == None:
                    third[z] = prev[count] + prev[count + 1]
                    count += 1
            prev = third
            fo.append(third)
        return fo