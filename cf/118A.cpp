#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string temp="";
    char the;
    for(char c:s){
        the=tolower(c);
        if(!(the=='y'||the=='o'||the=='i'||the=='u'||the=='a'||the=='e'))temp+=the;
    }
    string fo="";
    for(char c:temp){
        fo+='.';
        fo+=c;
    }
    cout << fo;
        return 0;
}