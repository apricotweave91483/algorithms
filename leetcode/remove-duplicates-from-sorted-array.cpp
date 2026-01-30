class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        int prev = nums[0]-1;
        int n = nums.size();
        for(int x = 0;x<n;++x){
            if(nums[x]>prev){
                nums[cnt]=nums[x];
                prev = nums[cnt];
                cnt++;
            }
        }
        return cnt;
    }
};