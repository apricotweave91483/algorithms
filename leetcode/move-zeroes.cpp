#include <bits/stdc++.h>
#include <unordered_map>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <iostream>
#include <variant>
#include <any>
#include <ctype.h>
#include <stdio.h>
using namespace std;
class Solution {
public:
void moveZeroes(vector<int> &nums) {
    int c = 0;
    bool cond = true;
    if (find(nums.begin(), nums.end(), 0) == nums.end()) {
        cond = false;}

    if (cond == true) {
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[c] = nums[i];
            c++;}
    }
    for (int z = c; z < nums.size(); z++) {
        nums[z] = 0;
    }
    }



}
};