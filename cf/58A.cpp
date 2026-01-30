#include <bits/stdc++.h>
using namespace std;
  int main()
{
    int poi=0;
    string hello="hello";
    string s;
    cin>>s;
    bool yes=0;
    for(char c:s){
        if(c==hello[poi])poi++;
        if(poi==hello.size()){yes=1;break;}
    }
    cout<<(yes ? "YES\n" : "NO\n");
     return 0;
}