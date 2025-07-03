// https://codeforces.com/problemset/problem/1401/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;

void solve() {
    ll n,k;

    cin >> n >> k;

    if (n%2==0) {
        if (k%2!=0) {
            if (k>n) {
                cout << k-n << endl;
            }
            else {
                cout << 1 << endl;
            }
        } else {
            if (k>n) {
                cout << k-n << endl;
            }
            else {
                cout << 0 << endl;
            }
        }     
    } else {
        if (k%2==0) {
            if (k>n) {
                cout << k-n << endl;
            }
            else {
                cout << 1 << endl;
            }
        } else {
            if (k>n) {
                cout << k-n << endl;
            }
            else {
                cout << 0 << endl;
            }
        }     
    }
}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}