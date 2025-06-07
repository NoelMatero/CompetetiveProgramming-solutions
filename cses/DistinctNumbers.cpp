// https://cses.fi/problemset/submit/1621/

#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;    
    cin>>n;
    
    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());

    int ans = 1;

    for (int i=0;i<n-1;i++) {
        if (nums[i+1] > nums[i]) ans++;
    }

    cout << ans;

    return 0;
}