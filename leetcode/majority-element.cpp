#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int>& nums){
        int current = nums[0];
        int counter = 0;
        int n = nums.size();
        for(int i =0;i<n;++i){
            if(counter==0)current=nums[i];
            if(nums[i]==current)++counter;
            else --counter;
        }
        return current;
    }
};