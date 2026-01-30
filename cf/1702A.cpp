#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x,p;
        x=1;cin>>p;
        while(x*10<=p)x*=10;
        cout<<p-x<<'\n';
    }
}