// https://codeforces.com/problemset/problem/1850/D

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

void solve() {
    ll n,k;

    cin>>n>>k;

    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());

    int streak = 0;
    int max_streak = -1;

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    for (int i=1;i<n;i++) {
        if (abs(nums[i]-nums[i-1]) <= k) {
            streak++;            
        } else {            
            streak = 0;
        }

        max_streak = max(max_streak, streak);
    }

    cout << n-(max_streak+1)<< endl;

    /*
    5 1
    1 2 4 5 6

    start iterating trough the vector. 
    keep track of the longest streak of numbers with differences less than k

    */
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
}