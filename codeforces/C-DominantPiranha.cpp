// https://codeforces.com/problemset/problem/1433/C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;

void solve() {
    ll n;

    cin >> n;

    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        cin >> nums[i];
    }

    int max_num = -1;

    for (int i=0;i<n;i++) {        
        max_num = max(max_num, nums[i]);
    }

    int ans = -1;

    for (int i=0;i<n;i++) {
        if (nums[i] == max_num) {
            if (i > 0 && i < n-1) {
                if (nums[i] != nums[i-1] || nums[i] != nums[i+1]) {
                    ans = i+1;
                    break;
                }
            } else if (i == 0) {
                if (nums[i] != nums[i+1]) {
                    ans = i+1;
                    break;
                }
            } else if (i == n-1) {
                if (nums[i] != nums[i-1]) {
                    ans = i+1;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}