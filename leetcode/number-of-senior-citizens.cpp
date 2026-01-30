#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        string temp;
        int sum = 0;
        for(string s: details){
            temp = "";
            temp += s[s.size()-4];
            temp += s[s.size()-3];
            if(stoi(temp)>60){
                sum++;
            }


        }
        return sum;
    }
};