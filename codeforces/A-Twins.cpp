// https://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> nums(n);

    int sum = 0;

    for (int i=0;i<n;i++) {
        cin>>nums[i];
        sum+=nums[i];
    }

    sort(nums.begin(), nums.end());

    int ans = 0;
    int ur_sum = 0;    

    for (int i=n-1;i>=0;i--) {
        if (ur_sum > sum) {
            cout << ans << endl;
            break;
        }        
        ans++;        
        ur_sum+=nums[i];
        sum-=nums[i];

        if (ur_sum > sum) {
            cout << ans << endl;
            break;
        }    

        //cout << ans << " " << ur_sum << " " << sum << endl;
    }    

    // 1 2 3 6 9
    // 9 6
}

