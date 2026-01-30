#include <bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    cin>>x>>y;
    string fo="";
    int n=x.size();
    for(int i=0;i<n;++i){
        if(x[i]==y[i])fo+='0';
        else fo+='1';
    }
    cout<<fo;
}
   