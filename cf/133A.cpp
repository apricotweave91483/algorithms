#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool yes=0;
    for(char c:s){
        if(c=='H'||c=='Q'||c=='9'){yes=1;break;}
    }
    cout<<(yes ? "YES" : "NO");
        return 0;
}