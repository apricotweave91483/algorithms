/******************************************************************************
 Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 *******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
  int main()
{
    int t;
    int cnt=0;
    cin >> t;
    while(t){
        if(t>=5){
            t-=5;
            ++cnt;
        }
        else if(t>=4){
            t-=4;
            ++cnt;
        }
        else if(t>=3){
            t-=3;
            ++cnt;
        }
        else if(t>=2){
            t-=2;
            ++cnt;
        }
        else{--t;++cnt;}
    }
    cout<<cnt;
    return 0;
}