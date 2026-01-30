#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
int countCharacters(vector<string>& words, string chars) {
    int fo = 0;
    unordered_map<char, int> dw;
    unordered_map<char, int> d;
    bool cond;

    for (char c : chars) {
        if (dw.find(c) == dw.end()) {
            dw[c] = 1;
        }
        else {
            dw[c]++;
        }
    }

    for (string x : words) {
        d.clear();
        cond = false;

        for (char c : x) {
            if (d.find(c) == d.end()) {
                d[c] = 1;
            }
            else {
                d[c]++;
            }
        }

        for (const auto& pair : d) {
            if (dw.find(pair.first) == dw.end()) {
                cond = true;
                break;
            }
        }
        if (!cond) {
            for (const auto& pair : d) {
                if (dw[pair.first] < d[pair.first]) {
                    cond = true;
                    break;
                }
            }
        }
        if (!cond) {
            fo += x.size();
        }
    }



return fo;
}
};
