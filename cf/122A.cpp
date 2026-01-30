#include <bits/stdc++.h>
using namespace std;
  int main()
{
    bool yes=0;
    int temp,t, n;
    cin>>n;
    for(int x=4;x<=n;++x){
        t=x;
        while(t){
            temp=t%10;
            if(temp==7||temp==4)yes=1;
            else {yes=0;break;}
            t/=10;
        }
        if(yes){
            if(n%x==0){break;}
        }
        else{yes=0;}
    }
    cout<<(yes ? "YES" : "NO");
     return 0;
}