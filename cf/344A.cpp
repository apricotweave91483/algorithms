#include <bits/stdc++.h>
using namespace std;
  int main()
{
    int cnt=1;
    int t;
    cin>>t;
    int arr[t];
    for(int x=0;x<t;++x){
        int w;
        cin>>w;
        arr[x]=w;
    }
    for(int x=0;x<t-1;++x){
        if(arr[x]!=arr[x+1])cnt++;
    }
    cout<<cnt;
    return 0;
}