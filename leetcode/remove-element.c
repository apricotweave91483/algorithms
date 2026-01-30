int removeElement(int* nums, int numsSize, int val) {
    int poi=0;
    for(int x=0;x<numsSize;++x){
        if(nums[x]!=val){
            nums[poi]=nums[x];
            poi++;
        }
    }
    return poi;
}