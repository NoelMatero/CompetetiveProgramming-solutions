// https://cses.fi/problemset/task/1640

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

using ll = long long;

int main() {
    ll n, x;

    cin >> n >> x;

    vector<pair<ll, ll>> nums(n);

    for (int i=0;i<n;i++) {
        ll a;        
        cin >> a;
        nums[i] = make_pair(a, i);
    }

    sort(nums.begin(), nums.end());

    ll l = 0;
    ll r = n-1;
    ll sum = 0;

    while (l<r) {
        if (nums[l].first+nums[r].first > x) {
            r--;
        } else if (nums[l].first+nums[r].first < x) {
            l++;
        } else if (nums[l].first+nums[r].first == x) {
            cout << nums[l].second+1 << " " << nums[r].second+1 << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
}