// https://codeforces.com/contest/1398/problem/C

#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <map>

using namespace std;

using ll = long long;

void solve() {
    //ios_base::sync_with_stdio(0);
	//cin.tie(0);

    ll n;

    cin >> n;

    string s;

    cin >> s;

    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        nums[i] = s[i] - '0';
    }     

    long long prefix_sum = 0;
	long long ans = 0;
	map<long long, int> sums;
    
	sums[0] = 1;        

    for (int i=0;i<n;i++) {
        prefix_sum += nums[i];        
        
        ans += sums[prefix_sum-(i+1)];     
            
        sums[prefix_sum - (i+1)]++;
    }

    cout << ans << endl;
 
}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}