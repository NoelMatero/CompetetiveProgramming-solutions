// https://codeforces.com/problemset/problem/318/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    ll n,k;

    cin >> n >> k;

    // 1, 3, 5, 7, 9, 2, 4, 6, 8, 10
    // 1 3 5 7, 2 4 6

    // 3 -> 5 
    // 2n-1 -> less than n/2
    // 7 -> 6
    // 
    
    // 

    if (n%2==0) {
        if (k<=n/2) {            
            cout << (2*k)-1 << endl;
        } else {
            cout << 2*(k-(n/2)) << endl;
        }
    } else {
        if (k<=(n/2)+1) {            
            cout << (2*k)-1 << endl;
        } else {
            cout << 2*(k-((n/2)+1)) << endl;
        }
    }
}