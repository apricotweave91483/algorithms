#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin>>t;
    int num=1;
    unordered_map<string,int>cont;
    while(t--){
        string s;cin>>s;
        if(!cont[s]){cout<<"OK\n";cont[s]++;}
        else {cout<<s<<cont[s]<<'\n';++cont[s];}
    }
}