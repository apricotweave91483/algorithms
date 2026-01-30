#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        string rlet;
        int p = 0;
        for(int x = s.size()-1;x>=0;x--){
            if(isalpha(s[x])) rlet+=s[x];
        }
        for(int x = 0;x<s.size();x++){
            if(isalpha(s[x])){
                s[x]=rlet[p];
                p++;
            }
        }
        return s;
    }
};