// https://codeforces.com/problemset/problem/709/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;

int main() {
    ll n, b, d;
    cin>>n>>b>>d;

    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }

    int waste = 0;
    int ans = 0;

    for (int i=0;i<n;i++) {
        if (waste > d) {
            ans++;
            waste = 0;
        }
        if (nums[i] <= b) {
            waste+=nums[i];
        } 
        
        if (waste > d) {
            ans++;
            waste = 0;
        }
    }

    cout << ans << endl;
}