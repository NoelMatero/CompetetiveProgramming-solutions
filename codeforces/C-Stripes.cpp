// https://codeforces.com/problemset/problem/1742/C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

using ll = long long;

void solve() {
    vector<string> rows(8);
    for (int i = 0; i < 8; ++i) {
        cin >> rows[i];
    }
 
    bool red = false;

    for (const string& r : rows) if (r == "RRRRRRRR") red = true;
    //for (const string& c : cols) if (c == "RRRRRRRR") red = true;

    if (red) cout << "R" << endl;
    else cout << "B" << endl;    
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    //freopen("output.txt", "w", stdout);  // Move here to open once
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
        string empty_line;
        getline(cin, empty_line); 
        if (empty_line.empty()) getline(cin, empty_line); 
    }
}