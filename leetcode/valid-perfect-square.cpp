class Solution {
public:
    bool isPerfectSquare(int num) {
        long long num1 = num;
        if(num==0||num==1||num==4)return 1;
        for(long x=1;x<num1/2;x++){
            if(x*x==num1)return 1;
        }
        return 0;
    }
};