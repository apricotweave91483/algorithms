#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        if(pattern==s && s.size()>1){return false;}
        unordered_map<char, vector<string>>dict;
        s+=' ';
        string emp = "";
        vector<string> words;
        string keys;
        
        int p = 0;

        for(int x=0;x<s.size();x++){
            if(s[x]==' '){
                dict[pattern[p]].push_back(emp);
                words.push_back(emp);
                if(keys.find(pattern[p])==-1)keys+=pattern[p];
                emp = "";
                p++;
            }
            if(s[x]!=' ')emp+=s[x];
        }
        if(words.size()!=pattern.size())return false;
        for(const auto& pair: dict){
            p=0;
            for(int x=0;x<(pair.second).size();x++){
                if(p!=0){
                    if(pair.second[x]!=pair.second[x-1])return 0;
                }
                p++;
            }
        }
        for(int x = 0; x<keys.size();x++){
            for(int y=0;y<keys.size();y++){
                if(dict[keys[x]][0]==dict[keys[y]][0] && x!=y)return 0;
            }
        }

        return 1;



    }
};
