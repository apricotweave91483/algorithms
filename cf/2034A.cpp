#include <bits/stdc++.h>
 using namespace std;
 int main() {
int t;
cin>>t;
while(t--){
 int a,b,m;
 cin>>a>>b;
 m=min(a,b);
 while(m%b!=m%a)m++;
 cout<<m<<'\n';
 }
 }