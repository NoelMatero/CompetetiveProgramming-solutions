// https://codeforces.com/problemset/problem/1927/B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    string ans;
    cin >> n;

    if (n==0) {
        cout << "a" << endl;
        return;
    }

    string letters = "abcdefghijklmnopqrstuvwxyz";

    ans.resize(n);

    vector<int> nums(n);

    // 0 0 0 1 0 2 0 3 1 1 4
    // 0 0 0 . 0 . 0 . . . .
    // a b c . d . e . . . .
    // a b c 1 d . e . 1 1 .
    // a b c a d . e . b c .
    // a b c a d 2 e . b c .
    // a b c a d a e . b c .
    // a b c a d a e 3 b c .
    // a b c a d a e a b c .
    // a b c a d a e a b c 4
    // a b c a d a e a b c a
    
    for (int i=0;i<n;i++) {
        cin >> nums[i];                
    }

    unordered_map<char, int> freq;

    int idx = 0;

    for (int i=0;i<n;i++) {
        if (nums[i] == 0) {
            ans[i] = letters[idx];
            freq[letters[idx]]++;
            idx++;
        } else {
            for (auto& a : freq) {
                if (a.second == nums[i]) {
                    ans[i] = a.first;
                    a.second++;
                    //freq[a.first]++; 
                    break;                   
                }
            }
        }
    }

    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    ll t;
    cin >> t;
    
    for (int i=0;i<t;i++) {
        solve();
    }
}