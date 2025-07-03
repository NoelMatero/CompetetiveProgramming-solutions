// https://codeforces.com/problemset/problem/1857/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);

    int odd = 0;
    int even = 0;

    for (int i=0;i<n;i++) {
        int num;
        cin >> num;

        if (num%2==0) even++;
        else odd++;
    }

    if (odd%2==0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
