// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    if (s.length() <= 10) {
        cout << s << endl;
        return;
    }

    cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i=0;i<t;i++) {
        string s;
        cin>>s;
        solve(s);
    }   


}