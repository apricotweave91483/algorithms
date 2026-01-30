#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal){
        char temp;
        vector<char> st = {};
        vector<char> g = {};
        for(char c:s){
            st.push_back(c);
        }
        for(char c:goal){
            g.push_back(c);
        }

        for(int x = 0;x<=st.size();x++){
            temp = st[0];
            st.erase(st.begin());
            st.push_back(temp);
            if(st==g){
                return true;
            }
        }
        return false;
    }
};
