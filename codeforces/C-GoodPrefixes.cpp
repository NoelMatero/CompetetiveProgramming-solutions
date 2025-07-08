// https://codeforces.com/problemset/problem/1985/C

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

    vector<ll> nums(n);

    for (int i=0;i<n;i++) {
        cin >> nums[i];
    }

    ll max_num = 0;
    ll prefix = 0;
    ll ans = 0;    

    for (int i=0;i<n;i++) {
        max_num = max(max_num, nums[i]);
        prefix += nums[i];
        if (max_num == prefix-max_num) {
            ans++;            
        }        
    }

    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}