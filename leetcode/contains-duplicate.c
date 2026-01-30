#include <stdlib.h>
int cmp(const void* a, const void* b){
    int x=*(int*)a;
    int y=*(int*)b;
    return (x > y) - (y > x);
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    if(numsSize==1)return 0;
    for(int x=1;x<numsSize;++x)if(nums[x]==nums[x-1])return 1;
    return 0;
}