class Solution:
    def myAtoi(self, s: str) -> int:
        sum = 0
        readnum = False
        repet = False
        numtrack=[]
        firstind = 0
        count = 0

        for x in range(len(s)):
            if readnum:
                if s[x] != '0' and s[x] != '1' and s[x] != '2' and s[x] != '3' and s[x] != '4' and s[x] != '5' and s[x] != '6' and s[x] != '7' and s[x] != '8' and s[x] != '9':
                    break
            if s[x] == '0' or s[x] == '1' or s[x] == '2' or s[x] == '3' or s[x] == '4' or s[x] == '5' or s[x] == '6' or s[x] == '7' or s[x] == '8' or s[x] == '9':
                if not repet:
                    firstind = x
                    repet = True
                readnum = True

            if readnum:
                numtrack.append(s[x])
        print(numtrack)
        print(s)
        for x in range(0,firstind):
            if s[x]!=' ' and s[x]!='-' and s[x]!= '+':
                return 0
            else:
                if s[x]=='-':
                    count+=1
                elif s[x]=='+':
                    count+=1
        print(firstind)
        if count>1:
            return 0
        for x in range(len(numtrack)):
            if numtrack[x] == '0':
                sum += 0*(10**(len(numtrack)-1-x))
            elif numtrack[x] == '1':
                sum += 1*(10**(len(numtrack)-1-x))
            elif numtrack[x] == '2':
                sum += 2*(10**(len(numtrack)-1-x))
            elif numtrack[x] == '3':
                sum += 3*(10**(len(numtrack)-1-x))
            elif numtrack[x] == '4':
                sum += 4*(10**(len(numtrack)-1-x))
            elif numtrack[x] == '5':
                sum += 5*(10**(len(numtrack)-1-x))
            elif numtrack[x] == '6':
                sum += 6*(10**(len(numtrack)-1-x))
            elif numtrack[x] == '7':
                sum += 7*(10**(len(numtrack)-1-x))
            elif numtrack[x] == '8':
                sum += 8*(10**(len(numtrack)-1-x))
            else:
                sum += 9*(10**(len(numtrack)-1-x))
        if count == 1:
            if firstind!=0:
                if s[firstind-1] != '+' and s[firstind-1] != '-':
                    return 0
        if firstind!=0:
            if s[firstind-1] == '-':
                sum *= -1
        if sum < -2147483648:
            sum = -2147483648
        elif sum > 2147483647:
            sum = 2147483647
        return sum