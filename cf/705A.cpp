#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string fo;
    for(int x=0;x<t;++x){
        if(x%2==0&&x==t-1)fo+="I hate it";
        else if(x==t-1)fo+="I love it";
        else if(x%2==0)fo+="I hate that ";
        else fo+="I love that ";
    }
        cout<<fo;
                return 0;
}