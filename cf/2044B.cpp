#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,ne="";
        cin>>s;
        for(int x=s.size()-1;x>-1;--x){
            if(s[x]=='q')ne+='p';
            else if(s[x]=='p')ne+='q';
            else ne+=s[x];
        }
        cout<<ne<<'\n';
    }
}