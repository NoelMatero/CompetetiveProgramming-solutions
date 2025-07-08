// https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>

using namespace std; 

using ll = long long;

int main() {
    string s;
    string a;

    cin >> s;

    int idx = 0;

    string hello = "hello";

    for (int i=0;i<s.length();i++) {
        if (s[i] == hello[idx]) {
            idx++;
        }
    }

    //cout << idx << endl;

    if (idx == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}