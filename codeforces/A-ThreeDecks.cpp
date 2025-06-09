// https://codeforces.com/problemset/problem/2104/A

// https://codeforces.com/problemset/problem/2106/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;    

    if ((a+b+c)%3==0) {
        if ((a+b+c)/3>=min((a,b),c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
}