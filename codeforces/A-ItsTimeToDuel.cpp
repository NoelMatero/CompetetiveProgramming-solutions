// https://codeforces.com/problemset/problem/2109/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }

    bool works = true;

    int one_count = 0;
    int zero_count = 0;

    for (int i=0;i<n-1;i++) {
        if (nums[i]+nums[i+1] < 1) {
            works = false;
            break;
        }
        if (nums[i] == 0) zero_count++;
        else one_count++;
    }

    if (nums[n-1] == 0) zero_count++;
    else one_count++;

    if (one_count == n || zero_count == n) works = false;    

    if (works) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;

    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
}