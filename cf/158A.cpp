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
    int sum=0;
    int l, mndex;
    cin >> l >> mndex;
    int arr[l];
    for(int x=0;x<l;++x){
        int t;
        cin>>t;
        arr[x]=t;
    }
    int min=arr[mndex-1];
    for(int x=0;x<l;++x){
        if(arr[x]>=min&&arr[x]>0)sum++;
    }
    cout<<sum;
    return 0;
}