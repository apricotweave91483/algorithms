class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int poi;
        bool cond;
        int cnt = 0;
        for(string str: words){
            cond=1;
            poi=0;
            while(poi!=str.size()){
                if(str[poi]!=s[poi]){cond=0;break;}
                poi++;
            }
            if(cond)++cnt;
        }
        return cnt;
    }
};