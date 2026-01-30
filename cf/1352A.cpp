#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin>>t;
    while(t--){
        int summands=0;
        int x;cin>>x;
        int p=x;
        int temp;
        while(p){
            if(p%10!=0)summands++;
            p/=10;
        }
        cout<<summands<<'\n';
        int times=1;
        while(x){
            temp=x%10;
            if(temp!=0){
                cout<<temp*times<<' ';
            }
            x/=10;
            times*=10;
        }
        cout<<'\n';
    }
    }