#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int k;cin>>k;
    int poi=0;
    for(int x=1;x<=1666;++x){
        if(x%3!=0&&x%10!=3)poi++;
        if(poi==k){cout<<x<<'\n';break;}
    }
}}