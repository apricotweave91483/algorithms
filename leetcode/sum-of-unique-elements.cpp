#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int, int> nummap;
        for(int c: nums){
            nummap[c]++;
        }
        for(const auto& pair: nummap){
            if(pair.second==1){
                sum+=pair.first;
            }
        }
        return sum;
    }
};