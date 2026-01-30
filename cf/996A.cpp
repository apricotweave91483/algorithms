#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>>x;
    long long total=0;
    while(x>=100){x-=100;total++;}
    while(x>=20){x-=20;total++;}
    while(x>=10){x-=10;total++;}
    while(x>=5){x-=5;total++;}
    while(x>=1){x-=1;total++;}
    cout<<total;
}