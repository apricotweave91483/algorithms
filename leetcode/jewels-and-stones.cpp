#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int j = 0;
        for(char c: stones){
            if(jewels.find(c)!=-1){
                j++;
            }
        }
        return j;
    }
};