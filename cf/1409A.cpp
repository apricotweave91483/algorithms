#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        int ans=abs(x-y);
        if(ans%10>0){
            ans/=10;
            ans+=1;
        }
        else ans/=10;
        cout<<ans<<'\n';
    }
         return 0;
}