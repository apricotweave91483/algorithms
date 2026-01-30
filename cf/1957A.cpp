#include <bits/stdc++.h>
using namespace std;
 int main(){
    unordered_map<int,int>dict;int t;
    cin>>t;
    while(t--){
        int sum=0;
        int len,x;cin>>len;
        while(len--){
            cin>>x;dict[x]++;
        }
        for(pair d:dict){
            while(dict[d.first]>=3){dict[d.first]-=3;sum++;}
        }
        cout<<sum<<'\n';
        dict.clear();
    }
}