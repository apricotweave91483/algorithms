#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    vector<int> arr(t);
    for (int x=0;x<t;++x) {
        cin >> arr[x];
    }
    sort(arr.begin(), arr.end());
        int t2;
    cin >> t2;
    while (t2--) {
        int tar;
        cin >> tar;
        cout << lower_bound(arr.begin(), arr.end(), tar+1) - arr.begin() << '\n';
    }
    }