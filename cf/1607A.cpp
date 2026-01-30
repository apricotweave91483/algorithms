#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
while(t--){
    char c;
    unordered_map<char,int>dict;
    for(int x=0;x<26;++x){cin>>c;dict[c]=x;}
    string s;
    cin>>s;
    int sum=0;
    for(int x=1;x<s.size();++x){
        sum+=abs(dict[s[x]]-dict[s[x-1]]);
    }
    cout<<sum<<'\n';
}
}