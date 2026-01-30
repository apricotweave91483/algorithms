#include <bits/stdc++.h>
using namespace std;
int main(){
    int changes=0;
    unordered_map<int,int>horshoe;
    int t=4;
    while(t--){
        int the;
        cin>>the;
        horshoe[the]++;
    }
    for(pair x:horshoe){
        if(x.second>1)changes+=x.second-1;
    }
    cout<<changes;
    
    
    
    return 0;
}

