#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        vector<int> t;
        for(char c: s){
            if(c=='I')t.push_back(1);
            else if(c=='V')t.push_back(5);
            else if(c=='X')t.push_back(10);
            else if(c=='L')t.push_back(50);
            else if(c=='C')t.push_back(100);
            else if(c=='D')t.push_back(500);
            else{t.push_back(1000);}
        }
        int sum = t[0];
        for(int x=1;x<t.size();x++){
            if(t[x-1]<t[x]){
                sum+=t[x]-2*(t[x-1]);
            }
            else{sum+=t[x];}
        }
        return sum;
    }
};
