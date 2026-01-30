#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int sum=0;
    int current=0;
    int t, act;
    cin>>t;
    while(t--){
        cin>>act;
        if(act==-1&&current==0)sum++;
        else if(act==-1&&current>0)current--;
        else current+=act;
            }
    cout<<sum;
        return 0;
}