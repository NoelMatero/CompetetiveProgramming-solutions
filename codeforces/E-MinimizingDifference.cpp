// https://codeforces.com/contest/1244/problem/E

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

using ll = long long;

bool works(ll k) {
    return true;
}

ll first_true(ll lo, ll hi) {
    hi++;
    while (lo<hi) {
        ll mid = lo + (hi - lo) / 2;

        if (works(mid)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }

    return lo;
}

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> nums(n);

    for (int i=0;i<n;i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    /*
    given a number x we need to see if we can make the 
    minimum possible difference between the maximum element and the minimum element 
    in the sequence be x, in no more than k operations. 

    k -> 5
    3 1 7 5

    1 3 5 7 -> 0
    3 3 5 7 -> 2
    3 3 5 5 -> 4

    difference is 2

    so to make the difference to 2: 

    done. 
    */


}