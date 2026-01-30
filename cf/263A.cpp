#include <bits/stdc++.h>
using namespace std;
int main(){
    int d[5][5];
    int why;
    int ecks;
    
bool cond=0;
for(int y=0;y<5;++y){
    if(cond)break;
    for(int x=0;x<5;++x){
        int temp;
        cin>>temp;
        d[y][x]=temp;
        if(temp==1){why=y;ecks=x;cond=1;break;}
    }
}
int moves=0;

moves+=abs(2-why);
moves+=abs(2-ecks);
cout << moves;
    return 0;
}

