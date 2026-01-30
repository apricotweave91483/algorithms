#include <bits/stdc++.h>
using namespace std;
int main(){
 int two, three, five, six;
 cin >> two >> three >> five >> six;
 int sum=0;
 int twofiftysix=min(two,five);
 twofiftysix=min(twofiftysix,six);
 sum+=256*twofiftysix;
 two-=twofiftysix;five-=twofiftysix;six-=twofiftysix;
  twofiftysix=min(two,three);
 sum+=32*twofiftysix;
  cout<<sum;
}