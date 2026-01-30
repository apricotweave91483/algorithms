#include <bits/stdc++.h>
using namespace std;
int main() { 
  int t;
  cin>>t;
  bool hard=0;
  while(t--){
    int n;
    cin>>n;
    if(n==1){hard=1;break;}
  }
  cout<<(hard ? "HARD" : "EASY");
    return 0;
}