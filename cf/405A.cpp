#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>arr;
    for(int x=0;x<t;++x){
        int temp;cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    for(int x=0;x<t;++x){
        if(x!=0)cout<<' ';
        cout<<arr[x];
    }
    return 0;
}