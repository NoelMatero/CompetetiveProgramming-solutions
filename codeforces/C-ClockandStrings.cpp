// https://codeforces.com/problemset/problem/1971/C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

void solve() {
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    int min_string_1 = min(a,b);
    int max_string_1 = max(a,b);

    int min_string_2 = min(c,d);
    int max_string_2 = max(c,d);

    bool intersect = false;

    if (((c<max_string_1&&c>min_string_1) || (d<max_string_1&&d>min_string_1)) 
    && 
    ((c>max_string_1&&c<min_string_1) || (d>max_string_1&&d<min_string_1))) 
    intersect = true;

    if (intersect) cout << "YES" << endl;
    else cout << "NO" << endl;    
}

int main() {
    int t;
    cin>>t;
    
    for (int i=0;i<t;i++) {
        solve();
    }
}