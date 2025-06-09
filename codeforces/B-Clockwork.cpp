// https://codeforces.com/problemset/problem/2062/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);
    
    int index = 0;

    bool works = true;

    for (int i=0;i<n;i++) {
        cin >> nums[i];

        int dist = i+1;    
    
        if (nums[i] <= 2*max(abs(n-dist), (dist-1))) {
            works = false;
        }        
    
    }

    if (works) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }     

    

    // 4 10 5
    // we lose because we cannot get to 4 before the timer hits 0. 
    // we cannot get there in time becuase going to other clocks takes 
    // time 2 which gets multiplied by 2 because we need to turn back too. 
    // so the turns it takes is 4 which is 4 so not possible. 
    // 2 2
    // same logic. going from left to right takes 2 seconds wtotal time hich is not enough.
    // so going from the smallest number to the furthest other side must take less time 
    // than the smallest clock has time

    // 5 6 7 8 -> 4 5 6 7
    // 5 5 6 7 -> 4 4 5 6
    // 5 4 4 5
    // 4 5 3 4
    // 3 4 6 3
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }

}