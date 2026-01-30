#include <bits/stdc++.h>
using namespace std;
int main(){
    int moves=0;
        int macks, min,macksind,minind,temp,t;
    cin>>t;
    for(int x=1;x<=t;++x){
        cin>>temp;
        if(x==1){macks=temp;min=temp;minind=x;macksind=x;}
        else{
            if(temp>macks){macksind=x;macks=temp;}
            if(temp<=min){minind=x;min=temp;}
        }
            }
    cout<<(minind<macksind ? (t-minind+macksind-1-1) : (t-minind+macksind-1));
        return 0;
}