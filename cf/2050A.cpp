#include <iostream>
using namespace std;
 int main() {
 int t;
 cin>>t;
 while(t--){
  int x,mx;
  cin>>x>>mx;
  int ctr=0;
  string temp;
  while(x--){
   cin>>temp;
   mx-=temp.size();
   if(mx>=0)ctr++;
  }
  cout<<ctr<<'\n';
 }
}