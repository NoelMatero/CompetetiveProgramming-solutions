// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;

    k--;

    vector<int> nums(n);

    int ans=0;

    for (int i=0;i<n;i++) {
        cin >> nums[i];
    }

    for (int i=0;i<n;i++) {
        if (nums[i] >= nums[k] && nums[i] > 0) {
            ans++;
        }
    }

    cout << ans;
}