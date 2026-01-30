#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool allupper=0;
    bool firstlower=0;
    bool firstlower2=0;
    if(s.size()==1&&islower(s[0]))firstlower2=1;
    else{
    for(char c:s){
        if(isupper(c))allupper=1;
        else{allupper=0;break;}
    }
    for(int x=0;x<s.size();++x){
        if(x==0&&islower(s[x])){firstlower=1;}
        else if(x!=0&&isupper(s[x])){firstlower=1;}
        else {firstlower=0;break;}
    }
    }
        if(firstlower2)cout<<(char)(s[0]-32);
    else if(firstlower){
        for(int x=0;x<s.size();++x){
            if(x==0)cout<<(char)(s[x]-32);
            else cout<<(char)(s[x]+32);
        }
    }
    else if(allupper){
        for(char c:s)cout<<(char)(c+32);
    }
    else cout<<s;
        return 0;
}