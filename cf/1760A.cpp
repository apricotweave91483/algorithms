#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x,y,z,relmax,relmin;
    cin>>x>>y;
    relmax=max(x,y);
    relmin=min(x,y);
    cin>>z;
    if(z>relmax&&z>relmin)cout<<relmax<<'\n';
    else if(z<relmax&&z<relmin)cout<<relmin<<'\n';
    else cout<<z<<'\n';
}
}