#include <bits/stdc++.h>
using namespace std;
 int main(){
int x,y,z;
cin>>x>>y>>z;
vector<int>h;
h.push_back(x);
h.push_back(y);
h.push_back(z);
 sort(h.begin(),h.end());
cout<<h[2]-h[0];
            }