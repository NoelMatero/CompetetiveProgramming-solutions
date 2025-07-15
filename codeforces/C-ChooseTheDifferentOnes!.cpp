// https://codeforces.com/problemset/problem/1927/C

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
    ll n, m, k;

    cin >> n >> m >> k;

    vector<ll> nums_a(n);
    vector<ll> nums_b(m);

    for (int i=0;i<n;i++) {
        cin >> nums_a[i];
    }

    for (int i=0;i<m;i++) {
        cin >> nums_b[i];
    }

    ll count_a = 0;
    ll count_b = 0;

    bool ans[k];

    /*
    a=[2,3,8,5,6,5]
    b=[1,3,4,10,5]    

    a=[2, 3, 5, 5, 6, 8]
    b=[1, 3, 4, 5, 10]    
    */

    for (int i=0;i<n;i++) {
        if (nums_a[n] <= k && !ans[nums_a[n]] && count_a < k/2) {
            count_a++;
            ans[nums_a[n]] = true;
        }
    }

    for (int i=0;i<m;i++) {
        if (nums_b[n] <= k && !ans[nums_b[n]] && count_b < k/2) {
            count_b++;
            ans[nums_b[n]] = true;
        }        
    }

    for (int i=0;i<k;i++) {
        if (!ans[i]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;     
}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}