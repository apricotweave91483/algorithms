class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int macks=1;
        int temp=1;
        for(int x = 1 ; x < nums.size() ; ++x){
            if(nums[x]>nums[x-1])temp++;
            else temp = 1;
            if(macks<temp)macks=temp;
        }
        return macks;
    }
};