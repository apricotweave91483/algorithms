#include <map>
#include <iostream>
using namespace std;
int main() {
	map<int, int> dt;
	int n, k; cin >> n >> k;
	int arr[n]; for (int x = 0; x < n; ++x) {
		scanf("%d", arr + x);
		dt[arr[x]] = x + 1;
	}
	for (int x = 0; x < n; ++x) {
		if (dt[k - arr[x]] && dt[k - arr[x]] != x + 1) {
			cout << x + 1 << " " << dt[k - arr[x]] << "\n";
			return 0;
		}
	}
	cout << "IMPOSSIBLE\n";
}
