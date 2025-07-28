    // https://codeforces.com/contest/816/problem/B
     
    #include <iostream>
    #include <vector>
    #include <queue>
    #include <cmath>
    #include <map>
    #include <unordered_map>
     
    using namespace std;
     
    using ll = long long;
     
    int main() {
        ios_base::sync_with_stdio(0);
	    cin.tie(0);

        ll n, k, q;
     
        cin >> n >> k >> q;
     
        vector<pair<ll, ll>> recipes(n);
        vector<pair<ll, ll>> questions(q);
     
        vector<ll> instances(200001);
     
        ll max_r = 0;
     
        for (int i=0;i<n;i++) {
            ll l, r;
     
            cin >> l >> r;
     
            max_r = max(max_r, r);
     
            recipes[i] = make_pair(l, r);
            instances[l]++;
            instances[r+1]--;
        }    
        
        for (int i=0;i<5;i++) {
            cout << instances[i] << " ";
        }

        for (int i=1;i<max_r+2;i++) {
            instances[i] += instances[i-1];        
        }

        for (int i=0;i<5;i++) {
            cout << instances[i] << " ";
        }

        cout << endl;
        
        for (int i=0;i<q;i++) {
            ll a, b;
     
            cin >> a >> b;
     
            ll ans = 0;
     
            for (int i=a;i<=b;i++) {
                if (instances[i] >= k) {
                    ans++;
                }
            }
     
            cout << ans << endl;
        }
     
        /*
        90 - 100
        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        first recipe:
        91-94
        [0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0]
        second recipe:
        92-97
        [0, 1, 1, 0, 0, -1, 0, 0, -1, 0, 0]
        third recipe:
        97-99
        [0, 1, 1, 0, 0, -1, 0, 1, -1, 0, -1]    
        prefix_sum
        [0, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 0]
     
        questions:
        92-94 -> 3
        93-97 -> 3
        95-96 -> 0
        90-100 -> 4
     
     
        */
}