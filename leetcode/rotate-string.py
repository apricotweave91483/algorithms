class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        st = []
        g = []
        for x in s:
            st.append(x)
        for x in goal:
            g.append(x)
            
        for x in range(len(s)+1):
            st.append(st.pop(0))
            if st == g:
                return True


        return False
