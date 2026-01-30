class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> fo;
        for(int i = 0;i<nums.size();++i){
            for(int x=i+1;x<nums.size();++x){
                if(nums[x]+nums[i]==target){
                    fo.push_back(i);
                    fo.push_back(x);
                }
            }
        }
        return fo;
    }
};