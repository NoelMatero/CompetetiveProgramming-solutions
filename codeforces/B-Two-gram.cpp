// https://codeforces.com/problemset/problem/977/B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

using ll = long long;

int main() {
    unordered_map<string, int> freq;
    int n;

    cin>>n;

    string s;

    cin >> s;

    string temp;

    temp.resize(2);

    for (int i=1;i<n;i++) {
        temp[0] = s[i-1];
        temp[1] = s[i];
        freq[temp]++;
    }

    int max_count = -1;
    string ans;

    for (auto& [s, count] : freq) {
        if (count > max_count) {
            max_count = count;
            ans = s;
        }
    }

    cout << ans << endl;
}