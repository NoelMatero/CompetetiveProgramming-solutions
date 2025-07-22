// https://codeforces.com/problemset/problem/1831/B

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
    ll n;
    cin >> n;

    vector<ll> nums_a(n);
    vector<ll> nums_b(n);

    for (int i = 0; i < n; i++) {
        cin >> nums_a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> nums_b[i];
    }

    unordered_map<ll, ll> freq_a;
    unordered_map<ll, ll> freq_b;
    unordered_map<ll, ll> total;

    ll curr = nums_a[0], streak = 1;
    for (int i = 1; i < n; i++) {
        if (nums_a[i] == curr) {
            streak++;
        } else {
            freq_a[curr] = max(freq_a[curr], streak);
            curr = nums_a[i];
            streak = 1;
        }
    }
    freq_a[curr] = max(freq_a[curr], streak); 

    curr = nums_b[0], streak = 1;
    for (int i = 1; i < n; i++) {
        if (nums_b[i] == curr) {
            streak++;
        } else {
            freq_b[curr] = max(freq_b[curr], streak);
            curr = nums_b[i];
            streak = 1;
        }
    }
    freq_b[curr] = max(freq_b[curr], streak); 

    for (auto a : freq_a) {
        total[a.first] += a.second;
    }

    for (auto a : freq_b) {
        total[a.first] += a.second;
    }

    ll ans = 0;
    for (auto a : total) {
        ans = max(ans, a.second);
    }

    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}
