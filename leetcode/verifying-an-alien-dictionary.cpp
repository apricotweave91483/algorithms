class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> char_and_place;
        for(int x = 0 ; x < order.size(); ++x)char_and_place[order[x]]=x;

        int n = words.size()-1;
        int poi;

        for(int x = 0 ; x < n ; ++x){
            if(words[x+1]!=words[x]){
            bool pass = 0;
            poi=0;
            while(words[x][poi]==words[x+1][poi]){
                poi++;
                
                if(poi==words[x].size()){pass=1;break;}
                if(poi==words[x+1].size())return false;
                
            }
            if(!pass){
            if(!(char_and_place[words[x][poi]]<char_and_place[words[x+1][poi]]))return false;}}
        }
        return true;
    }
};