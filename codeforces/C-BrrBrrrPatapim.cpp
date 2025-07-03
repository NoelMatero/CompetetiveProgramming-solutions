// https://codeforces.com/problemset/problem/2094/C

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

void solve() {
    int n;
    cin>>n;

    int total = (2*n*(2*n+1))/2;

    vector<int> nums(2*n);

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> nums[i+j+1];
            
        }
    }

    for (int i=0;i<2*n;i++) {
        total -= nums[i]; 
    }

    nums[0] = total;

    for (int i=0;i<2*n;i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
    return 0;
}