// https://codeforces.com/problemset/problem/69/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>

using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    ll x = 0;
    ll y = 0;
    ll z = 0;

    for (int i=0;i<n;i++) {
        ll tx, ty, tz;
        cin>>tx>>ty>>tz;

        x += tx;
        y += ty;
        z += tz;
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

