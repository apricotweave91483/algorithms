#include <bits/stdc++.h>
using namespace std;
  int main()
{
    int cnt=0;
    int t,h,c;
    cin>>t>>h;
    while(t--){
        cin>>c;
        if(c>h)cnt+=2;
        else ++cnt;
    }
    cout<<cnt;
    return 0;
}