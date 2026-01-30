#include <bits/stdc++.h>
using namespace std;

void solve(){
    int len;
    string ans;
    cin >> len;
    cin >> ans;
    string keys = "ABCD";
    
    int correct = 0;
    
    unordered_map<char, int> dict;
    
    for(int x = 0; x < ans.size(); ++x)++dict[ans[x]];
    
    for(char c : keys){
        if(dict[c]>len)correct+=len;
        else correct+=dict[c];
    }
    cout << correct << endl;
}

int main(){
    int times;
    cin >> times;
    for(int x = 0 ; x< times; ++x)solve();
}

