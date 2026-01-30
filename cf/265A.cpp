#include <bits/stdc++.h>
using namespace std;
int main(){
    int pos=1;int poi=0;
    string s,s2;
    cin>>s>>s2;
    for(char c:s2){
        if(c==s[poi]){
            poi++;
            pos++;
        }
    }
    cout<<pos;
}