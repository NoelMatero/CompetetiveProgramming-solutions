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

    vector<bool> ans(k, false);

    /*
    a=[2,3,8,5,6,5]
    b=[1,3,4,10,5]    

    a=[2, 3, 5, 5, 6, 8]
    b=[1, 3, 4, 5, 10]    

    a = [2, 3, 5, 6]
    b = [1, 3, 4, 5]


    */

    set<int> temp_a;
    set<int> temp_b;

    set<int> final;

     for (int i = 0; i < n; i++) {
        if (nums_a[i] <= k) {
            temp_a.insert(nums_a[i]);
        }
    }

    for (int i = 0; i < m; i++) {
        if (nums_b[i] <= k) {
            temp_b.insert(nums_b[i]);
        }
    }

    for (int i:temp_a) {
        final.insert(i);
    }

    for (int i:temp_b) {
        final.insert(i);
    }
        
    if (temp_a.size() >= k/2 && temp_b.size() >= k/2 && final.size() == k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }    

    /*for (int i:temp_a) {
        cout << i << " ";
    }

    cout << endl;

    for (int i:temp_b) {
        cout << i << " ";
    }

    cout << endl;

    for (int i:final) {
        cout << i << " ";
    }*/
}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}