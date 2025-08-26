// https://codeforces.com/contest/762/problem/B

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

using ll = long long;

int main() {
    ll a, b, c;

    cin >> a >> b >> c;

    ll computers = a+b+c;

    ll n;

    cin >> n;

    vector<pair<ll, bool>> mouses(n);

    for (int i=0;i<n;i++) {
        ll a;string b;

        cin >> a >> b;

        if (b == "USB") {
            mouses[i] = make_pair(a, true);
        } else if (b == "PS/2") {
            mouses[i] = make_pair(a, false);
        }   
    }

    sort(mouses.begin(), mouses.end());

    ll ans = 0;
    ll amount =  0;

    for (int i=0;i<n;i++) {
        if (mouses[i].second && a>0) {
            a--;
            ans += mouses[i].first;
            amount++;
        } else if (!mouses[i].second && b>0) {
            b--;
            ans += mouses[i].first;
            amount++;
        } else if (c > 0) {
            c--;
            ans += mouses[i].first;
            amount++;
        }
    }

    cout << amount << " " << ans << endl;

    /*
    2 1 1
    4
    5 USB
    6 PS/2
    3 PS/2
    7 PS/2
    


    */

}