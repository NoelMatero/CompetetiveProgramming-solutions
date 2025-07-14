// https://codeforces.com/problemset/problem/268/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>
#include <cctype>

using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    /*
    2

    1 2

    4

    1 2 3 4

    2
    3
    4
    1 3
    1 4
    1 2 4
    1 2 3 4

    2

    1 2

    3

    1 2 3

    3
    2
    1 3
    1 2 3     
    */

    int ans = 0;  

    for (int i=1;i<n;i++) {
        ans += (n-i)*i;
    }

    cout << ans+n << endl;
}