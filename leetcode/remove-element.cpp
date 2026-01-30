class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cont= 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[cont] = nums[i];
                cont++;
            }
            
        }
        return cont;
    }
};