#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    for(int t=1;t<=x;++t){
        if(t%2!=0){for(int z=0;z<y;++z)cout<<'#';cout<<'\n';}
        else if(t%2==0&&t%4!=0){for(int z=1;z<y;++z)cout<<'.';cout<<"#\n";}
        else{cout<<'#';for(int z=1;z<y;++z)cout<<'.';cout<<'\n';}
    }
}