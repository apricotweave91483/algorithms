#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
int n=s.size();
bool cond=0;
 for(int x=0;x<n-6;++x){
    if(s[x]==s[x+1]&&s[x]==s[x+2]&&s[x]==s[x+3]&&s[x]==s[x+4]&&s[x]==s[x+5]&&s[x]==s[x+6]){
        cond=1;break;
    }
}
cout<<(cond ? "YES" : "NO");
return 0;
}