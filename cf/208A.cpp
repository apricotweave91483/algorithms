#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string sta="";
    string fo="";
        for(int x=0;x<s.size();++x){
        sta+=s[x];
        if(sta=="WUB")sta="";
        else if(sta[sta.size()-3]=='W'&&sta[sta.size()-2]=='U'&&sta[sta.size()-1]=='B'){fo+=sta.substr(0,sta.size()-3);sta="";fo+=' ';}
        else if(x==s.size()-1&&sta!=""){fo+=sta;fo+=' ';}
    }
    cout<<fo;
                    return 0;
}
   