// https://codeforces.com/problemset/problem/131/A

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
    string s;

    cin >> s;

    bool first_upper = true;

    if (!isupper(s[0])) {
        first_upper = false;
    }

    bool rest_upper = true;

    for (int i=1;i<s.length();i++) {
        if (!isupper(s[i])) rest_upper = false;
    }   

    if ((first_upper && rest_upper) || (!first_upper && rest_upper)) {
        for (int i=0;i<s.length();i++) {
            if (isupper(s[i])) {
                cout << (char)tolower(s[i]);
            } else {
                cout << (char)toupper(s[i]);
            }
        }
    } else {
        cout << s;
    }

}