#include <bits/stdc++.h>
using namespace std;
 int main(){
    int t,k;
    cin>>t>>k;
    int temp,sum=0;
    while(t--){
        cin>>temp;
        if(temp+k<=5){
            sum++;
        }
    }
    cout<<sum/3;
    }