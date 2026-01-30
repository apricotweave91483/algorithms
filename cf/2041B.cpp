#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=a+b;
        int check=0;
        int val=0;
        while(1){
            if(check+(val+1)>sum)break;
            val++;
            check+=val;
        }
        cout<<val<<'\n';
    }
}