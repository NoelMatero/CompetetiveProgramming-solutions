// https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> chars;

    for (int i=0;i<s.length();i++) {
        chars.insert(s[i]);
    }    

    if (chars.size()%2==0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}