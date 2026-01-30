#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int poi=1;
    unordered_map<int,int>dict;
    int t,recep;
    cin>>t;
    int fo[t];
    int z=t;
    while(t--){
        cin>>recep;
        dict[recep]=poi;
        poi++;
    }
    for(pair x:dict){
        fo[x.first-1]=x.second;
    }
    for(int i=0;i<z;++i){
        if(i!=0)cout<<' ';
        cout<<fo[i];
    }
        return 0;
}