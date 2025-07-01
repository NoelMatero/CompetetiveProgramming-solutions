// https://codeforces.com/problemset/problem/1837/B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

using ll = long long;

void solve() {
    int n;

    cin >> n;

    string s;

    cin >> s;

    int num = 999;

    set<int> ans;

    vector<int> nums;
    nums.push_back(999);

    ans.insert(999);

    if (n==1) {
        cout << 1 << endl;
        return;
    }

    for (int i=0;i<n;i++) {
        if (s[i] == '<') {num++; 
            ans.insert(num);
            nums.push_back(num);
        }
        else if (s[i] == '>') {
            num--; 
            ans.insert(num);
            nums.push_back(num);
        }
    }

    // 
    // 999, 1000, 99    

    cout << ans.size() << endl;

    // <<>>
    // 1, 2, 3, 2, 1
    // <>><<
    // 100, 101, 100, 99, 100, 101
}

int main() {
    int t;
    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}