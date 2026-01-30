#include <bits/stdc++.h>
using namespace std;
int main(){
    int fo=0;
    int t;
    cin>>t;
    while(t--){
        string op;
        cin>>op;
        if(op=="++X"||op=="X++")++fo;
        else --fo;
    }
    cout << fo;
return 0;}