// https://codeforces.com/problemset/problem/460/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    int n,m;
    cin>>n>>m;

    int temp_n = n;
    int temp_m = m;

    int ans = 0;

    for (int i=0;i<temp_n;i++) {
        if (m==0) {
            m = temp_m;
            temp_n++;
        }
        m--;
        ans++;
        if (m==0) {
            m = temp_m;
            temp_n++;
        }

    }

    cout << ans << endl;
}