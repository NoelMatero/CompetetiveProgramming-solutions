// https://codeforces.com/contest/276/problem/C

#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
#include <unordered_map>
#include <algorithm>
     
using namespace std;
     
using ll = long long;
     
int main() {
    ll n, q;

    cin >> n >> q;

    vector<ll> nums(n);

    priority_queue<ll> largest;

    for (int i=0;i<n;i++) {
        ll a;
        cin >> a;
        nums[i] = a;
        largest.push(a);
    }    

    vector<ll> instances(n+2, 0);

    for (int i=0;i<q;i++) {
        ll l, r;
        cin >> l >> r;

        instances[l]++;
        instances[r+1]--;

        /*
        5 3 2

        1 2
        2 3
        1 3

        0 0 0
        1 0 -1
        1 1 -1
        2 1 -1

        prefix:

        2 3 2

        3 2 2
        5 3 2

        5*3 + 2*3 + 2*2 
        */
    }   

    for (int i=1;i<n+2;i++) {
        instances[i] += instances[i-1];
    }    

    sort(instances.begin(), instances.end());
    //sort(instances.begin(), instances.end());       

    ll ans = 0;

    for (int i=n+1;i>1;i--) {
        ll a = largest.top();        
        ans += instances[i] * a;
        largest.pop();
    }

    cout << ans << endl;
}