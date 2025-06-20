// https://codeforces.com/problemset/problem/133/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    string s;
    cin >> s;

    bool works = false;

    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            works = true;
        } 
    }

    if (works) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}