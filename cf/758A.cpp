#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int t;
    cin>>t;
    int arr[t];
    int macks;
    for(int x=0;x<t;++x){
        int temp;cin>>temp;
        if(!x)macks=temp;
        else if(temp>macks)macks=temp;
        arr[x]=temp;
    }
    for(int x=0;x<t;++x){
        sum+=macks-arr[x];
    }
    cout<<sum;
    }