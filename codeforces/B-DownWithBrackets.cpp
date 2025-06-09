// https://codeforces.com/problemset/problem/2110/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int balanced = 1;
    int index = 1;

    while (balanced>0) {
        if (s[index] == '(') {
            balanced++;
        } else {
            balanced--;
        }
        index++;
    }
    
    if (index!=s.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // (())()()
    // ((())()())
    //     
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
}