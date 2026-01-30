#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeTrailingZeros(string num) {
        int lnznindex;
        string fo;
        for(int x=num.size()-1;x>-1;x--){
            if(num[x]!='0'){
                lnznindex = x;
                break;
            }
        }
        if (lnznindex == num.size()-1){
            return num;
        }
        for(int x=0;x<=lnznindex;x++){
            fo += num[x];
        }
        return fo;
        
        
    }
};