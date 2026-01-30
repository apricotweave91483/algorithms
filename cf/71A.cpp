#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool big = s.size() > 10 ? 1 : 0;
        if (big) cout << s[0] << s.size() - 2 << s[s.size()-1];
        else cout << s;
                cout<<'\n';
    }
}