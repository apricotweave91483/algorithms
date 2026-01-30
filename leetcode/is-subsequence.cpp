class Solution {
public:
    bool isSubsequence(string s, string t) {
        int poi = 0;
        string fo = "";
        for(int i = 0;i<t.size();++i){
            if(t[i]==s[poi]){
                fo += s[poi];
                ++poi;
            }
        }
        return (fo==s);
    }
};