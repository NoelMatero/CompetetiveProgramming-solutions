// https://codeforces.com/problemset/problem/1904/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;

void solve() {
    ll a, b;
    cin >> a >> b;

    set<pair<long long, long long>> used;

    ll x_k, y_k;

    cin >> x_k >> y_k;

    ll x_q, y_q;

    cin >> x_q >> y_q;

    // generate all pairs (a, b);
    // (a, b) (-a, b) (-a, -b) (a, -b) 
    // (b, a) (-b, a) (-b, -a) (b, -a) 

    // (0, 0)
    // (-5, -2)

    vector<pair<ll, ll>> subset_k(8);
    vector<pair<ll, ll>> subset_q(8);

    set<pair<ll, ll>> move_set = {
    {a, b}, {-a, b}, {-a, -b}, {a, -b},
    {b, a}, {-b, a}, {-b, -a}, {b, -a}
    };
    vector<pair<ll, ll>> res(move_set.begin(), move_set.end());

    for (int i=0;i<8;i++) {
        subset_k[i] = make_pair(x_k + res[i].first, y_k + res[i].second);
        subset_q[i] = make_pair(x_q+res[i].first, y_q+res[i].second); 
    }
    
    /*
    * * * * * * *
    * * * * + * +        * * *
    * * * * * * *        * * *
    * * * * * * *        * * *
    * * * * * * *        * * *
    * * * . * * *        * * *
    * * * * * * *
    * * * * * * *        * * *
    */

    int ans = 0;

    for (int i=0;i<8;i++) {
        for (int j=0;j<8;j++) {
            if (subset_k[i].first==subset_q[j].first && subset_k[i].second == subset_q[j].second) {                
                used.insert(make_pair(subset_k[i].first, subset_k[i].second));                
                //cout << subset_k[i].first << " " << subset_k[i].second << endl;
                //cout << subset_q[j].first << " " << subset_q[j].second << endl;
                ans++;
            }
        }        
    }

    cout << used.size() << endl;
}

int main() {
    ll t;
    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}
