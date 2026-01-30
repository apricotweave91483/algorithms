#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x;
    unordered_map<int,int>gops;
    cin>>t;
    while(t--){cin>>x;gops[x]++;}
        int sum=gops[4];
    int min31=min(gops[3],gops[1]);
    sum+=min31;
    gops[3]-=min31;gops[1]-=min31;
    sum+=gops[3];gops[3]=0;
        sum+=gops[2]/2;
    sum+=gops[1]/4;
    gops[2]=gops[2]%2;
    gops[1]=gops[1]%4;
    if(gops[2]&&gops[1]==3){
        sum+=2;
        gops[2]=0;gops[1]=0;}
    if(gops[2]||gops[1])++sum;
        cout<<sum;
    }