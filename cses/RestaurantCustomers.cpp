// https://cses.fi/problemset/task/1619

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <cmath>
using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    vector<pair<ll , ll>> customers(n);    

    for (int i=0;i<n;i++) {
        ll a, b;

        cin >> a >> b;

        customers[i] = make_pair(a, b);        
    }

    vector<ll> times;
    for (auto [a, b] : customers) {
        times.push_back(a);
        times.push_back(b);
    }

    sort(times.begin(), times.end());
    times.erase(unique(times.begin(), times.end()), times.end());

    unordered_map<ll, int> time_to_index;
    for (int i = 0; i < times.size(); ++i) {
        time_to_index[times[i]] = i;
    }

    vector<int> pref_sum(times.size() + 1, 0);

    for (auto [a, b] : customers) {
        int start = time_to_index[a];
        int end = time_to_index[b];
        pref_sum[start] += 1;
        pref_sum[end] -= 1;
    }

    int max_customers = pref_sum[0];
    for (int i = 1; i < pref_sum.size(); ++i) {
        pref_sum[i] += pref_sum[i - 1];
        max_customers = max((max_customers), pref_sum[i]);
    }

    cout << max_customers << endl;

    /*
    5 8
    2 4
    3 9

    0 0 1 1 -1 1 0 0 -1 -1
    */
}