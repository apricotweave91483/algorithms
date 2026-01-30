class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        
        pows = []

        p = 1
        pows.append(1)
        while p * 3 <= n:
            p *= 3
            pows.append(p)

        sf = []
        cur = []

        def dfs(i):
            if i >= len(pows):
                sf.append(cur.copy())
                return

            cur.append(pows[i])
            dfs(i + 1)

            cur.pop()
            dfs(i + 1)
        dfs(0)

        f = [sum(x) for x in sf]
        return n in f
