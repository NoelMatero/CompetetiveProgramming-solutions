// https://codeforces.com/problemset/problem/2060/C

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int l=0;int r=n-1;
    int ans = 0;

    int turns = n/2;

    while (l<r && turns > 0) {
        if (nums[l]+nums[r] == k) {
            ans++;
            turns--;
            l++;
            r--;
        }

        else if (nums[l]+nums[r] < k) {
            l++;
        } else {
            r--;
        }        
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }

}   