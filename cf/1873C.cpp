#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int sum=0;int tx,ty;char temp;
    for(int x=1;x<=10;++x){
        for(int y=1;y<=10;++y){
            cin>>temp;
            if(temp=='X'){
                y*2>11 ? ty=10-y+1 : ty=y;
                x*2>11 ? tx=10-x+1 : tx=x;
                sum+=min(tx,ty);
            }
        }
    }
    cout<<sum<<'\n';}
    }