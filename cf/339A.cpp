#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size()==1)cout<<s;
else{
    vector<int> nums;
    for(char c:s){
        if(c=='3')nums.push_back(3);
        else if(c=='2')nums.push_back(2);
        else if(c=='1')nums.push_back(1);
    }
    string fo="";
    sort(nums.begin(), nums.end());
    for(int x=0;x<nums.size();++x){
        fo+=to_string(nums[x]);
        if(x==nums.size()-1)break;
        fo+='+';
    }
    cout << fo;
                                              }
return 0;}