#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin>>t;
    int arr[t];
    int cnt=1;
    int maxcnt=1;
    for(int x=0;x<t;++x){
        int temp;cin>>temp;arr[x]=temp;
    }
    int prev=arr[0];
    for(int x=1;x<t;++x){
        if(arr[x]>=prev)cnt++;
        else cnt=1;
        if(cnt>maxcnt)maxcnt=cnt;
        prev=arr[x];
    }
    cout<<maxcnt;
}