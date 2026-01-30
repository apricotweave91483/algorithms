#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
string s="codeforces";
cin>>t;
while(t--){
    char c;cin>>c;
    cout<<(s.find(c)==-1 ? "NO\n" : "YES\n");
}
}