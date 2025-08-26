// https://cses.fi/problemset/task/1084

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <unordered_map>

using namespace std;

using ll = long long;

int main() {
    ll n, m, k;

    cin >> n >> m >> k;

    multiset<ll> applicant;
    multiset<ll> apartment;

    for (int i=0;i<n;i++) {
        ll a;

        cin >> a;

        applicant.insert(a);
    }

    for (int i=0;i<m;i++) {
        ll a;

        cin >> a;

        apartment.insert(a);
    }

    /*sort(applicant.begin(), applicant.end());
    sort(apartment.begin(), apartment.end());*/

    ll ans = 0;

    for (int a : applicant) {
        auto it = apartment.lower_bound(a-k);
        if (abs(a - *it)<=k) {
            ans++;
            apartment.erase(it);
        }
    }

    cout << ans << endl;
}