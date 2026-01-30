#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
int reverse(int x) {
        
long long temp;
int c = 0;
int t = x;
long long sum = 0;

while(x!=0){
    temp = x%10;
    c++;
    x -= temp;
    x = x/10;
}
while(t!=0){
    temp = t%10;
    sum += temp*(pow(10, (c-1)));
    t-=temp;
    t=t/10;
    c--;
}
if(sum<-2147483648||sum>2147483647){
    return 0;
}
return sum;
}
};
