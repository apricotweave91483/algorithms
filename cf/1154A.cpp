#include <bits/stdc++.h>
using namespace std;
int main(){
    int ind,macks,temp;
    int arr[4];
    for(int x=0;x<4;++x){
        cin>>temp;
        if(x==0){macks=temp;ind=0;}
        else if(temp>macks){macks=temp;ind=x;}
        arr[x]=temp;
    }
    int p=0;
    for(int x=0;x<4;++x){
        if(x!=ind){
            cout<<macks-arr[x];
            p++;
            if(p!=3)cout<<' ';
        }
    }
}