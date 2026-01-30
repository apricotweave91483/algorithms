using namespace std;
 #include <bits/stdc++.h>
int main()
{
    int t;
    cin>>t;
    while(t--){
        int len;cin>>len;
        int sum=0;
        for(int x=0;x<len;++x){
            int temp;cin>>temp;
            if(x%2==0)sum+=temp;
            else sum-=temp;
        }
        cout<<sum<<'\n';
    }
}