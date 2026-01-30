#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> check;
        int newn;
        int temp;
        while(n!=1){
            if(check.find(n)==check.end()){
                check[n]++;
                while(n!=0){
                    temp=n%10;
                    newn+= temp*temp;
                    n-=temp;
                    n/=10;
                }
                n=newn;
                newn=0;
                
            }
            else{return false;}
        }
        return true;
    }
};