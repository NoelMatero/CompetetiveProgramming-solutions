// https://cses.fi/problemset/task/1641

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

    for (int i=0;i<n;i++) {
        ll cur = nums[i].first;
        
        ll l = 0;
        ll r = n-1;

        if (i == 0) {
            l = 1;            
        } else if (i == n-1) {
            r = n-2;
        } 

        while (l<r && i!=l && i!=r) {            
            if (nums[l].first+nums[r].first + nums[i].first > x) {
                r--;
            } else if (nums[l].first+nums[r].first + nums[i].first < x) {
                l++;
            } else if (nums[l].first+nums[r].first + nums[i].first == x) {                
                cout << nums[l].second+1 << " " << nums[r].second+1 << " " << nums[i].second+1 << endl;
                return 0;
            }
        }        
    }    

    cout << "IMPOSSIBLE" << endl;
}