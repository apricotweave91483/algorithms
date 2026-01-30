#include <bits/stdc++.h>
using namespace std;
int main(){
    int sumx=0;
    int sumy=0;
    int sumz=0;
        int x,y,z;
        int t;
        cin>>t;
    while(t--){
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
        cout << (sumx||sumy||sumz ? "NO" : "YES");
return 0;}