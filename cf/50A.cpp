#include <bits/stdc++.h>
using namespace std;
  int main()
{
    int w,y;
    cin>>w>>y;
    int cnt=0;
    int x=w*y;
    if(x>=2){
        cout<<x/2;
    }
    else cout<<0;
    return 0;
}