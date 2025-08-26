// https://codeforces.com/problemset/problem/500/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;

int main() {
    ll n, t;

    cin >> n >> t;

    vector<ll> cells(n);

    for (int i=1;i<n;i++) {
        cin >> cells[i];
    }

    ll idx = 1;

    while (idx < n) {
        idx += cells[idx];         

        if (idx == t) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}