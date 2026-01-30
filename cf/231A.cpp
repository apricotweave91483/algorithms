#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin>>t;
    int sum=0;
    while(t--){
        int ans1;
        int ans2;
        int ans3;
        cin>>ans1>>ans2>>ans3;
        if(ans1+ans2+ans3>=2)++sum;
    }
    cout << sum;
return 0;}