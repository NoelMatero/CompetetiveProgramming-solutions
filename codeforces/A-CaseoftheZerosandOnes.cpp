// https://codeforces.com/problemset/problem/556/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

using ll = long long;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count0 = 0, count1 = 0;

    for (char c : s) {
        if (c == '0') count0++;
        else count1++;
    }

    cout << abs(count0 - count1) << endl;
}