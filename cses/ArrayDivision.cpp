// https://cses.fi/problemset/task/1085

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <climits>

using namespace std;

using ll = long long;

ll last_true(ll lo, ll hi, ll n, vector<ll> nums) {
    hi++;
	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		if (works(mid)) {
			hi = mid;
		} else {
			lo = mid + 1;
		}
	}

	return lo;
}

bool works(ll x) {
    
}

int main() {
    ll n, k;

    vector<ll> nums(n);

    /*
    2 4 7 3 5
    
    check for an integer x if it is possible to form a subarray 
    with a sum of x. the subarrays size needs to be such that the other k-1 subarrays can be formed
    so nums.size()-s>=k-1

    how to check if x is valid:


    */
}