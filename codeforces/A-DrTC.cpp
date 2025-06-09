// https://codeforces.com/problemset/problem/2106/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin>>n;

    string s;    
    cin>>s;
    string temp = s;

    int ans = 0;

    for (int i=0;i<n;i++) {
        if (temp[i]-'0' == 0) {
            temp[i] = '1';
        } else if (temp[i]-'0' == 1) {
            temp[i] = '0';
        }        

        for (int j=0;j<n;j++) {   
            if (temp[j] - '0' == 1) {
                ans++;
            }

            // 101
            // 001
            // 111
            // 100

            // 
        }    

        temp = s;
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
}