#include <bits/stdc++.h>


using namespace std;
class Solution {
public:
vector<string> commonChars(vector<string>& words) {
    vector<string> fo;
    unordered_map<char, int> fd;
    unordered_map<char, int> d;
    for (char c : words[0]) {
        if (fd.find(c) == fd.end()) {
            fd[c] = 1;
        }
        else {
            fd[c]++;
        }
    }

    for (string word : words) {
        d.clear();
        for(char c:word) {
            if (d.find(c) == d.end()) {
                d[c] = 1;
            }
            else {d[c]++;}
        }
        for(const auto& pair:fd) {
            if (d.find(pair.first) == d.end()) {
                fd[pair.first] = 0;
            }
        }

        for(const auto& pair:fd){
            if(d[pair.first]<fd[pair.first]){
                fd[pair.first]=d[pair.first];
            }
        }
    }
    for(const auto& pair:fd){
        for(int i = 0; i<pair.second; i++){
            fo.push_back(string(1, pair.first));
        }
    }


return fo;


}};