// https://codeforces.com/gym/104002/problem/E

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>

using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    priority_queue<pair<ll, ll>> nums;

    for (int i=0;i<n;i++) {
        ll a;

        cin >> a;

        nums.push(make_pair(a, i));
    }    

    ll robot_idx = -1;

    ll ans = 0;

    if (n == 1) { cout << nums.top().first << endl; return 0; }

    for (int i=0;i<n/2;i++) {
        if (nums.top().second == robot_idx) {
            nums.pop();
            ans += nums.top().first;
            nums.pop();
        } else if (nums.top().second > robot_idx) {
            ans += nums.top().first;
            nums.pop();
        }

        robot_idx++;
    }
    
    cout << ans << endl;
}