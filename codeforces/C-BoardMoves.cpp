// https://codeforces.com/problemset/problem/1353/C

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

    if (n == 1) {
        cout << 0 << endl;
        return;
    } 

    ll ans = 0;

    ll multiplier = 0;

    for (int i=3;i<=n;i+=2) {
        multiplier+=1;
        ans += multiplier * ((i * i) - ((i-2) * (i-2)));    
        
        //cout << multiplier << " " << (i * i) << " " << ((i-2) * (i-2)) << endl;
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

