#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,b;
    cin >> l >> b;
    int years=0;
    while(b>=l){
        l*=3;
        b*=2;
        ++years;
    }
    cout<<years;
return 0;}