#include <bits/stdc++.h>
using namespace std;
int main(){
    bool yes=1;
    unordered_map<char,int>found;
    string s="abcdefghijklmnopqrstuvwxyz";
    for(char c:s)found[c]++;
    int n;
    char w;
    cin>>n;
    int num=0;
    while(n--){
        cin>>w;
        if(found[(char)tolower(w)]!=0){num++;found[(char)tolower(w)]=0;}
    }
        cout<<(num==26 ? "YES" : "NO");
    return 0;
}