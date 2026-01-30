#include <bits/stdc++.h>
using namespace std;
  int main()
{
    int year,temp,place,goal;
    cin>>year;
    bool pass;
    unordered_map<int,int>digs;
    for(int x=year+1;x<=9012;++x){
        digs.clear();
        goal=x;
        pass=1;
        temp=x;
        while(temp){
            place=temp%10;
            digs[place]++;
            temp-=place;
            temp/=10;
        }
        for(pair x:digs){
            if(x.second>1)pass=0;
        }
        if(pass)break;
    }
    cout<<goal;
    return 0;
}