class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        count = {}
        for x in arr:
            if x in count:
                count[x] += 1
            else:
                count[x] = 1
        for x in count:
            if count[x] > 1:
                for y in arr:
                    if y == x:
                        for h in arr:
                            if y in arr:
                                arr.remove(y)
        one_Item_That_Has_More_Than_One_Occurance = False
        if len(count) == 1:
            for x in count:
                if count[x] > 1:
                    one_Item_That_Has_More_Than_One_Occurance = True
        if one_Item_That_Has_More_Than_One_Occurance == True:
            return ""
        if k-1 > (len(arr)-1):
            return ""
        else:
            return (arr[k - 1])