#include <cmath>
#include <iostream>

using namespace std;
class Solution{
public:
bool isPalindrome(int x){
    if(x<0)return 0;
    if(x==0)return 1;
    int c = x;
    int finalcheck = x;
    int temp;
    long long num2 = 0;
    int cnt=-1;


    while(x!=0){
        temp = x%10;
        x-=temp;
        x/=10;
        cnt++;
    }

    while(c!=0){
        temp = c%10;
        c-=temp;
        c/=10;
        num2+=temp*(pow(10, cnt));
        cnt--;
    }
    return finalcheck==num2;}
};