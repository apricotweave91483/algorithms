#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin  >> t;
    while(t--){
        int len;
        cin >> len;

        int arr[len];


        for(int x = 0 ; x < len ; ++x){
            int d;
            cin >> d;
            arr[x]=d;
        }

        int macks = arr[0];

        for(int x = 0 ; x<len; ++x){
            if(x%2==0&&(len-x-1)%2==0&&arr[x]>macks)macks=arr[x];
        }
        cout << macks << endl;

    }

return 0;}

