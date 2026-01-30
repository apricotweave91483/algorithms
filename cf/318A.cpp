#include <iostream>
using namespace std;
 int main() {
    long long n, k;
    cin >> n >> k;
     // Calculate the number of odd numbers
    long long odd_count = (n + 1) / 2; // or use ceil(n / 2.0) if you prefer floats
     if (k <= odd_count) {
        // k-th odd number
        cout << 2 * k - 1 << endl;
    } else {
        // k-th even number
        cout << 2 * (k - odd_count) << endl;
    }
     return 0;
}