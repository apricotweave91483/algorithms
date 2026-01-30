class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        int p = 1;
        int pp = 0;
        int f;
        for(int x = 2; x <= n; x++){
            f = p + pp;
            pp = p;
            p = f;
        }
        return f;
    }
};