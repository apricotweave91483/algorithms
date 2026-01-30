#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    unordered_map<char, int>dict;
    for(char c:s)++dict[c];
    int sum=0;
    for(pair x:dict)sum++;
    cout << (sum%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}

