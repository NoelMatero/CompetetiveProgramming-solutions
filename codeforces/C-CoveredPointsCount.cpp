// https://codeforces.com/problemset/problem/1000/C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    vector<pair<ll , ll>> points(n);    

    for (int i=0;i<n;i++) {
        ll a, b;

        cin >> a >> b;

        points[i] = make_pair(a, b);        
    }

    vector<ll> times;
    for (auto [a, b] : points) {
        times.push_back(a);
        times.push_back(b);
    }

    sort(times.begin(), times.end());
    //times.erase(unique(times.begin(), times.end()), times.end());

    unordered_map<ll, int> time_to_index;
    for (int i = 0; i < times.size(); ++i) {
        time_to_index[times[i]] = i;
    }

    vector<int> pref_sum(times.size() + 1, 0);

    for (auto [a, b] : points) {
        int start = time_to_index[a];
        int end = time_to_index[b];
        pref_sum[start] += 1;
        pref_sum[end+1] -= 1;
    }

    vector<ll> ans(n+1);

    int max_customers = pref_sum[0];
    for (int i = 1; i < pref_sum.size(); ++i) {
        pref_sum[i] += pref_sum[i - 1];
        ans[pref_sum[i]] += 1;
    }
    

    ll left = n;
    for (int i=1;i<n;i++) {
        left -= ans[1];
    }

    ans[1] += left;

    for (int i : ans) cout << i << " ";





    /*
    0 3
    1 3
    3 8

    1 1 0 1 -2 0 0 0 -1 0
    pref_sum:
    1 2 2 3 1 1 1 1 0


    
    */
}