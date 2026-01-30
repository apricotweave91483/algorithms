#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0;
        for(string c: operations){
            if((c=="++X")||(c=="X++")){
                sum++;
            }
            else{
                sum--;
            }

        }
        return sum;
    }
};