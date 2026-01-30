class Solution:
    def isPalindrome(self, s: str) -> bool:
        d = []
        for x in s:
            if x.isalnum():
                d.append(x.lower())

        
        list_test = []
        list_test2 = []
        if len(d) % 2 == 0:
            for x in range(len(d) // 2):
                list_test.append(d[x])
            for x in range(len(d) - 1, len(d) // 2 - 1, -1):
                list_test2.append(d[x])
        else:
            for x in range((len(d) - 1) // 2):
                list_test.append(d[x])
            for x in range(len(d) - 1, ((len(d) - 1) // 2), -1):
                list_test2.append(d[x])
        if list_test2 == list_test:
            return True
        else:
            return False