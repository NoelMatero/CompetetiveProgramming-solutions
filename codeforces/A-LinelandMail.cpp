// https://codeforces.com/problemset/problem/567/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        cin >> nums[i];
    }

    /*
    -5   -2  |  2     7
    */

    int max_dist = -1;
    int min_dist = __INT_MAX__;    

    for (int i=0;i<n;i++) {
        max_dist = max(abs(nums[i]-nums[0]), abs(nums[i]-nums[n-1]));        
        if (i==0) {
            min_dist = abs(nums[i]-nums[i+1]);
        } else if (i == n-1) {
            min_dist = abs(nums[i]-nums[i-1]);
        } else {
            min_dist = min(abs(nums[i]-nums[i-1]), abs(nums[i]-nums[i+1]));
        }        

        cout << min_dist << " " << max_dist << endl;
    }        
}