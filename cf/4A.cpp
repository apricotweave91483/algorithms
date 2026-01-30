#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    bool cond=0;
    for(int x=1;x<t;++x){
        if((t-x)%2==0&&x%2==0){cond=1;}
    }
    cout << (cond ? "YES" : "NO");
    
    
    return 0;
}

