#include <bits/stdc++.h>
using namespace std;
int main(){
 int unique=0;
    unordered_map<char,int>yes;
    int t=1000;
    char c;
    while(t--){
        cin>>c;
        if(isalpha(c))yes[c]=1;
        else if(c=='}')break;
    }
    for(pair x:yes)++unique;
    cout<<unique;
}