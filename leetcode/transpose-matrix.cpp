#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> fo;
        vector<int> temp;
        for(int y = 0; y < matrix[0].size() ; ++y){
            temp.clear();
            for(int x = 0 ; x < matrix.size(); ++x){
                temp.push_back(matrix[x][y]);
            }
            fo.push_back(temp);
        }
        return fo;
    }
};