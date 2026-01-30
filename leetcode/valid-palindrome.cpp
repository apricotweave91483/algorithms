#include <bits/stdc++.h>
#include <unordered_map>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <iostream>
#include <variant>
#include <any>
#include <ctype.h>
#include <stdio.h>
using namespace std;
class Solution {
public:
bool isPalindrome(string s) {
    string lit;
    lit = s;
    vector<char> newlit;

    for (char x : lit) {
        if (isalnum(static_cast<unsigned char>(x))) {
            if (isalpha(static_cast<unsigned char>(x))) {
                newlit.push_back(tolower(x));
            }

            else {newlit.push_back(x);}
        }
    }

    for (int i = 0; i < (newlit.size())/2; ++i) {
        if (newlit[i] != newlit[newlit.size()-1-i]) {
            return false;
        }
    }
    return true;
}
};