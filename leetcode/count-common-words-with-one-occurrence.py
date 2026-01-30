class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        COUNT_FOR_WORDS1 = {}
        COUNT_FOR_WORDS2 = {}
        count = 0
        for x in words1:
            if x in COUNT_FOR_WORDS1:
                COUNT_FOR_WORDS1[x] += 1
            else:
                COUNT_FOR_WORDS1[x] = 1

        for x in words2:
            if x in COUNT_FOR_WORDS2:
                COUNT_FOR_WORDS2[x] += 1
            else:
                COUNT_FOR_WORDS2[x] = 1
                
        for x in words1:
            if x in COUNT_FOR_WORDS1 and x in COUNT_FOR_WORDS2:
                if COUNT_FOR_WORDS1[x] == COUNT_FOR_WORDS2[x] and COUNT_FOR_WORDS2[x] == 1:
                    count +=1
        
        return count