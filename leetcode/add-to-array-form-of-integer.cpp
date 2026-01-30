#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> output;
        int carry = k;
        
        // Process the number from the end to the beginning
        for (int i = num.size() - 1; i >= 0; --i) {
            int sum = num[i] + carry;
            output.push_back(sum % 10);
            carry = sum / 10;
        }
        
        // If there's any carry left, process it
        while (carry > 0) {
            output.push_back(carry % 10);
            carry /= 10;
        }
        
        // The output vector is in reverse order, so reverse it
        reverse(output.begin(), output.end());
        
        return output;
    }
};