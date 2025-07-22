// https://codeforces.com/problemset/problem/1715/B'

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
    ll n, k, b, s;

    cin >> n >> k >> b >> s;

    /*
    1 6 3 100 -> -1
    3 6 3 12 -> -1
    5 4 7 80 -> -1 

    x1/4 + x2/4 + x3/4 .. + x5/4 = 7

    x1+..+x5 = 80
    s >= k*b

    x1/6 + x2/6 + x3/6 = 3

    x1+..x3 = 12



    if (19/6 == 3) true -> one element with 19.

    else {we need to remove elements from the s so that s becomes s/k == b}

    3 6 3 19 -> [0, 0, 19]

    5 4 7 38 -> 38/4 = 9 != 7
    we need to remove 4*(9-7) (8) from the number so that it becomes 7 
    without adding any numbers to the resulting value b.
    this is possible because 8/5-1 < 4
    */    

    vector<ll> ans(n);

    if (s/k == b) {
        ans[0] = s;
    } else if (s/k > b) {
        if (n == 1) {        
            if (s / k != b) {
                cout << -1 << endl;
                return;
            } else {
                cout << s << endl;
                return;
            }
        }

        if (b == 0) {
            if (s/n == 0) {
                for (int i=0;i<s;i++) {
                    cout << 1 << " ";
                }

                for (int i=s;i<n;i++) {
                    cout << 0 << " ";
                }

                cout << endl;

                return;
            } else {
                cout << -1 << endl;
                return;
            }
        }

        ll needed_remove = (k * ((s/k)-b));

        //cout << needed_remove << " " << needed_remove/(n-1) << endl;

        if ((needed_remove/(n-1)) < k) {
            ans[0] = s-needed_remove;

            cout << ans[0] << " ";

            for (int i=1;i<n;i++) {
               cout << (needed_remove/(n-1)) << " ";
            }

            cout << endl;

            return;
        } else {
            cout << -1 << endl;
            return;
        }
    } else {
        cout << -1 << endl;
        return;
    }

    cout << ans[0] << " ";

    for (int i=1;i<n;i++) {
        cout << 0 << " ";
    }

    cout << endl;
}

int main() {    
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}