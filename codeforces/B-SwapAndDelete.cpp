// https://codeforces.com/problemset/problem/1913/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>
#include <cctype>

using namespace std;

using ll = long long;

void solve() {
    string s;

    cin >> s;

    int count = 0;

    for (int i=0;i<s.length();i++) {
        if (s[i] == '0') count++;
        else count--;
    }

    if (count == 0) {
        cout << 0 << endl;
        return;
    }
}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}