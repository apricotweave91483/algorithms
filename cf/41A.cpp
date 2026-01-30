#include <bits/stdc++.h>
using namespace std;
 int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())cout<<"NO";
    else{
        bool yes=1;
        int len=s1.size()-1;
        for(int x=len;x>-1;--x){
            if(s1[x]!=s2[len-x]){yes=0;break;}
        }
        cout << (yes ? "YES" : "NO");
    }
     return 0;
}