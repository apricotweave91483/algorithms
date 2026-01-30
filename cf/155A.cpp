#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int awesome=0;
    int t;cin>>t;
    int p=t;
    int min,max;
    for(int y=0;y<t;++y){
        int x;
        cin>>x;
        if(!y){max=x;min=x;}
        if(x>max){awesome++;max=x;}
        if(x<min){awesome++;min=x;}
    }
    cout<<awesome;
}