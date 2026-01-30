#include <bits/stdc++.h>
class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        int mad[26]={0};
        int tmp[26]={0};
        auto cnt=[&](string s)->void{
            memset(tmp,0,sizeof(tmp));
            for(char C:s)tmp[C-'a']++;
        };
        for(string s:words2){
            cnt(s);
            for(int x=0;x<26;++x)mad[x]=max(mad[x],tmp[x]);
        }
        for(string s:words1){
            cnt(s);
            bool good=1;
            for(int x=0;x<26;++x){
                if(mad[x]>tmp[x]){
                    good=0;
                    break;
                }
            }
            if(good)ans.push_back(s);
        }
        return ans;
    }
};