// https://codeforces.com/problemset/problem/2102/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        nums[i] = input; 
    }

    int target = nums[0];

    sort(nums.begin(), nums.end());

    int median = nums[n / 2];

    int index;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) index = i;
    }

    int diff = abs(n / 2 - (index + 1));

    if (median == target) {
        cout << "YES" << endl;
        return;
    }

    if (index > (n / 2)) {
        if (n - (index + 1) < diff) {
            cout << "NO" << endl;
            return;
        } else {
            cout << "YES" << endl;
            return;
        }
    } else {
        if (n - (index + 1) < diff) {
            cout << "NO" << endl;
            return;
        } else {
            cout << "YES" << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}
