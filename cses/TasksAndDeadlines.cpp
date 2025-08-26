// https://cses.fi/problemset/task/1630

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    vector<pair<ll, ll>> tasks(n);

    for (int i=0;i<n;i++) {
        ll a, b;

        cin >> a >> b;

        tasks[i] = make_pair(a, b);
    }

    sort(tasks.begin(), tasks.end());

    ll time = 0;
    ll ans = 0;

    for (int i=0;i<n;i++) {
        time += tasks[i].first;
        ans += tasks[i].second - time;
    }

    cout << ans << endl;
}