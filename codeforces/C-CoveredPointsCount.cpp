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

    ll max_point;

    vector<ll> start_times;
    vector<ll> end_times;
    unordered_map<ll, ll> start_to_end;
    for (auto [a, b] : points) {
        start_times.push_back(a);
        end_times.push_back(b);
        start_to_end[a] = b;

        max_point = max(max_point, b);
    }

    /*
    for each start time, we will count the current prefix sum and update ans[prefix_sum] 
    value by adding to it the distance between end_time[i]-start_time[i]

    because the current prefix sum will continue until the first segment ends

    start_times:

    0
    1
    3

    end times:

    3
    3
    8
     
    
    */
        
    sort(start_times.begin(), start_times.end());
    sort(end_times.begin(), end_times.end());
    //times.erase(unique(times.begin(), times.end()), times.end());

    unordered_map<ll, int> time_to_index;
    for (int i = 0; i < start_times.size(); ++i) {
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
    

    ll left = max_point;
    for (int i=2;i<=n;i++) {
        left -= ans[i];
    }

    ans[1] += left;

    for (int i : pref_sum) cout << i << " ";

    cout << endl;

    for (int i=1;i<=n;i++) {
        cout << ans[i] << " ";
    }

    

    /*
    0 3
    1 3
    3 8

    1 1 0 1 -2 0 0 0 -1 0
    pref_sum:
    1 2 2 3 1 1 1 1 0


    
    */
}