#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    unordered_map<char,int>wins;
    string s;
    cin>>s;
    for(char c:s)++wins[c];
    if(wins['A']>wins['D'])cout<<"Anton";
    else if(wins['D']>wins['A'])cout<<"Danik";
    else cout<<"Friendship";
     return 0;
}