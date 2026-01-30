#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int y;cin>>y;
        int even=0;
        int odd=0;
        while(y--){
            int temp;
            cin>>temp;
            temp%2==0 ? even++ : odd++;
        }
        if(even==0&&odd!=0)cout<<odd-1;
        else if(even!=0&&odd!=0)cout<<1+odd;
        else if(even!=0&&odd==0)cout<<1;
        cout<<'\n';
    }
}