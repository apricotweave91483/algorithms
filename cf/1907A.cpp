#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int coord=s[1]-'0';
    char alphabet[8]={'a','b','c','d','e','f','g','h'};
    for(int x=1;x<=8;++x){
        if(x!=coord)cout<<s[0]<<x<<'\n';
    }
    for(int x=0;x<8;++x){
        if(alphabet[x]!=s[0])cout<<alphabet[x]<<coord<<'\n';
    }
}}