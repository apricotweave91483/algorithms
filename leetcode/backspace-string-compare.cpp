#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string rs;
        string rt;
        string fs;
        string ft;
        
        for(int x = s.size()-1;x!=-1;x--){
            rs += s[x];
        }
        for(int x = t.size()-1;x!=-1;x--){
            rt += t[x];
        }
        int skip = 0;
        for(char c:rs){
            if(c=='#'){
                skip++;
            }
            else{
                if(skip==0){
                    fs += c;
                }
                else if(skip>0){
                    skip--;
                }
            }
        }
        skip =0;
        for(char c:rt){
            if(c=='#'){
                skip++;
            }
            else{
                if(skip==0){
                    ft += c;
                }
                else if(skip>0){
                    skip--;
                }
            }
        }
        return ft==fs;
        
    }
};