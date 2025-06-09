// https://codeforces.com/problemset/problem/96/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;

    int dangerous_1_count = 0;
    int dangerous_0_count = 0;
    bool dangerous = false;

    for (int i=0;i<s.length();i++) {
        int digit = s[i] - '0';

        if (digit == 0) {
            dangerous_0_count++;
            dangerous_1_count = 0;
        } else {
            dangerous_1_count++;
            dangerous_0_count = 0;
        }

        if (dangerous_0_count >= 7 || dangerous_1_count >= 7) {
            dangerous = true;
        }
    }

    if (dangerous) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    // 001001
    // keep track of the amount of digits. if the digit chances then reset the counter



} 