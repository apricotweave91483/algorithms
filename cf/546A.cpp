#include<bits/stdc++.h>
using namespace std;
  int main()
{
    int sum=0;
    int b,bal,t;
    cin>>b>>bal>>t;
    for(int x=1;x<=t;++x){
        sum+=b*x;
    }
    cout << (bal-sum<0 ? (sum-bal) : 0);
        return 0;
}