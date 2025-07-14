// https://codeforces.com/problemset/problem/139/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>
#include <cctype>

using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    vector<int> nums(7);

    for (int i=0;i<7;i++) {
        cin >> nums[i];
    }

    int ans = 0;

    while (n>=0) 
    {
        for (int i=0;i<7;i++) {
            n-=nums[i];
            ans = i;

            if (n<=0) {
                cout << ans+1 << endl;
                return 0;
            }
        }
    }

    cout << ans+1 << endl;
}