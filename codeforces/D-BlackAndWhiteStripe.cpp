// https://codeforces.com/problemset/problem/1690/D

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>
#include <cctype>

using namespace std;

using ll = long long;

void solve() {
    ll n, k;

    cin >> n >> k;

    string s;

    cin >> s;

    ll min_ans = INT_MAX;
    ll temp_ans = 0;

    /*for (int i=k;i<=n;i++) {
        for (int j=i-k;j<i;j++) {
            //cout << s[]
            if (s[j]=='W') temp_ans++;
        }

        min_ans = min(min_ans, temp_ans);
        temp_ans = 0;
    }*/

    //cout << min_ans << endl;

    for (int i=0;i<k;i++) {
        if (s[i]=='W') temp_ans++;
    }

    min_ans = min(min_ans, temp_ans);

    int left = 0, right = k-1, cur = 0;
    while (left < n-k && right < n) {        
        left++;
        right++;                    

        if (s[left-1] == 'W') temp_ans--;
        if (s[right] == 'W') temp_ans++;

        min_ans = min(min_ans, temp_ans);   
	}

    cout << min_ans << endl;
}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) solve();
}