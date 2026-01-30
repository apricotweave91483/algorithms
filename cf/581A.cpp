#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int x,y;
    cin>>x>>y;
    int diff=0;int same=0;
    diff=min(x,y);
    cout<<diff<<' ';
    same=max(x,y)-diff;
    same/=2;
    cout<<same;
    }