class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int window;
        unordered_map<int, int> dict;

        for(int x = 0 ; x < nums.size() ; ++x)dict[nums[x]]++;

        for(int x = 0 ; x < nums.size() ; ++x){
            window = k;
            if(dict[nums[x]]>1){
                while(window--){
                    if(x+window+1<nums.size()){
                    if(nums[x+window+1]==nums[x])return true;}
                }
            }
        }
        return false;
    }
};