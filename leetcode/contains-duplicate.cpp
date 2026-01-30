class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> dict;

        for(int x  : nums)dict[x]++;

        for(pair x : dict){
            if(x.second>1)return true;
        }
        return false;
    }
};