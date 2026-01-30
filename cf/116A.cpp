#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int current=0;
    int macks=0;
    int t;
    cin>>t;
    while(t--){
        int leave,enter;
        cin>>leave>>enter;
        current-=leave;
        current+=enter;
        if(current>macks)macks=current;
    }
    cout<<macks;
    return 0;
}