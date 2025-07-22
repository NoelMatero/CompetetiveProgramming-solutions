#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;

    priority_queue<int> min_pq;  
    for (ll i = 1; i <= n; i++) {
        min_pq.push(i);
    }

    vector<pair<ll, ll>> ans;
    ll last_num = 0;

    for (ll i = 0; i < n - 1; i++) {
        ll a = min_pq.top(); min_pq.pop();
        ll b = min_pq.top(); min_pq.pop();

        ans.emplace_back(a, b);

        ll c = (a + b + 1) / 2;
        min_pq.push(c);

        last_num = c;
    }

    cout << last_num << "\n";
    for (auto& p : ans) {
        cout << p.first << " " << p.second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }
}
