#include<bits/stdc++.h>
using namespace std;
  int main()
{
    string s;
    cin>>s;
    int up=0;
    int low=0;
    for(char c:s){
        if(toupper(c)==c)++up;
        else ++low;
    }
    if(low>=up){
        for(int x=0;x<s.size();++x){
            s[x]=tolower(s[x]);
        }
    }
    else{
        for(int x=0;x<s.size();++x){
            s[x]=toupper(s[x]);
        }
    }
    cout<<s;
    return 0;
}