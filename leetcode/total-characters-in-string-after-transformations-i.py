class Solution:
    def lengthAfterTransformations(self, s: str, t: int) -> int:
        arr = [0] * 27
        for c in s:
            arr[ord(c)-ord('a')] += 1
        for _ in range(t):
            arr[26]+=arr[25]
            arr[25]=0
            for x in range(24,-1,-1):
                arr[x + 1] += arr[x]
                arr[x]=0
            arr[0]+=arr[26]
            arr[1]+=arr[26]
            arr[26]=0
        su = sum(arr)
        return su % 1000000007
