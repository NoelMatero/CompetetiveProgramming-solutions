// https://codeforces.com/problemset/problem/1875/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,n;

    cin>>a>>b>>n;

    vector<int> tools(n);

    for (int i=0;i<n;i++) {
        cin>>tools[i];
    }

    sort(tools.begin(), tools.end());

    ll ans = 0;
    ll cur_time = b;

    for (int i=0;i<n;i++) {
        if (cur_time+tools[i]>a) {
            ans += cur_time-1;
            cur_time=1;       
            if (cur_time+tools[i]>a) cur_time = a;  
            else cur_time+=tools[i];                
            //cout << ans << " " << cur_time << endl;
            continue;
        }

        cur_time+=tools[i];
        //cout << cur_time << endl;
    }

    cout << ans+cur_time << endl;

    /*
    10 10 2
    5 5

    10->1 time: 9
    1->6 time: 
    

    5 3 3
    1 1 7

    1->4->1->5

    wait always until 1.
    now 1, time: 4
    use 7 and wait: time 4+5 -> 9

    use smallest first and then wait for the bigger ones to be used at time 1.


    
    
    */
}

int main() {
    ll t;
    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}