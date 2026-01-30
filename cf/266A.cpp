#include <bits/stdc++.h>
using namespace std;
int main(){
    int len;
    cin >> len;
    string s;
    cin >> s;
    int cnt=0;
        for(int x=1;x<len;++x){
        if(s[x]==s[x-1])++cnt;
    }
    cout<<cnt;
return 0;}