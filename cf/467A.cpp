#include <bits/stdc++.h>
using namespace std;
  int main()
{
    int cnt=0;
    int t,cap,cur;
    cin>>t;
    while(t--){
        cin>>cur>>cap;
        if(cur+1<cap)++cnt;
    }
    cout<<cnt;
     return 0;
}