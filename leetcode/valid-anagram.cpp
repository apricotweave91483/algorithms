class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sm;
        unordered_map<char, int> tm;
        for(char c:s){
            sm[c]++;
        }
        for(char c:t){
            tm[c]++;
        }
        for(const auto& pair: sm){
            if(pair.second!=tm[pair.first])return false;
        }
        for(const auto& pair: tm){
            if(pair.second!=sm[pair.first])return false;}
        return true;
    }
};