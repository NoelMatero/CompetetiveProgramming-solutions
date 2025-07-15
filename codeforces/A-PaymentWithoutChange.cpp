// https://codeforces.com/problemset/problem/1256/A

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
    ll a, b, n, s;

    cin >> a >> b >> n >> s;

    ll count_a = static_cast<int>(std::floor(s/n));

    if (a==count_a) {
        cout << "YES" << endl;
        return;
    } else if (a<count_a && (a*n)+b>=s) {
        cout << "YES" << endl;
        return;
    } else if ((a>count_a && (count_a*n)+b>=s)) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO" << endl;
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