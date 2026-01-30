#include <bits/stdc++.h>
using namespace std;
int main(){
    int total=0;
    int dam1,dam2,dam3,dam4,dragons;
    cin>>dam1>>dam2>>dam3>>dam4>>dragons;
    for(int x=1;x<=dragons;++x){
        if(x%dam1==0||x%dam2==0||x%dam3==0||x%dam4==0)++total;
    }
    cout<<total;
    return 0;
}