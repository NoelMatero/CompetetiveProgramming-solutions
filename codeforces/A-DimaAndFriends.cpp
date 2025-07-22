// https://codeforces.com/problemset/problem/272/A

#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    vector<int> fingers(n);

    ll sum = 0;
    ll ans = 0;

    for (int i=0;i<n;i++) {
        cin >> fingers[i];
        sum += fingers[i];
    }

    vector<char> players(n+1);

    players[0] = 'D';

    for (int i=1;i<=n;i++) {
        players[i] = '*';
    }

    ll idx = 0;

    for (int i=0;i<sum;i++) {
        if (idx==n+1) {
            idx = 0;
        }
                
        idx++;
    }    
    
    for (int i=1;i<=5;i++) {
        
        if (idx==n+1) {
            idx = 0;
        }
        
        if (players[idx]!='D') {
            ans++;
        }
        idx++;
    }

    cout << ans << endl;

    /*
         *
       D   *
    
       3   5

         8


    */
}