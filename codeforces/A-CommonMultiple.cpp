// https://codeforces.com/problemset/problem/2103/A

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin>>n;
    
    set<int> nums;

    for (int i=0;i<n;i++) {
        int a;
        cin>>a;

        nums.insert(a);
    }

    cout << nums.size() << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}