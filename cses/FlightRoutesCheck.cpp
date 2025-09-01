// https://cses.fi/problemset/task/1682

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

using ll = long long;

vector<vector<ll>> adj;
vector<bool> visited;

void dfs(ll node) {
    for (ll neighbor : adj[node]) {
        if (!visited[neighbor]) {
            visited[neighbor] = true;
            dfs(neighbor);
        }        
    }
}

void solve() {
    ll n;

    cin >> n;

    adj.resize(n);
    visited.resize(n);

    for (int i=0;i<n;i++) {
        ll a;
        cin >> a;

        adj[i].push_back(--a);
    }

    vector<int> city_reps;

    //dfs(0);

    //for (bool visit : visited) cout << visit << " ";

    ll temp = 0;

	for (int i = 0; i < n; i++) {
		if (visited[i]) { continue; }

		visited[i] = true;		

		dfs(i);
        
        for (bool visit : visited) cout << visit << " ";
        temp++;

        cout << endl;
	}  

    cout << temp << endl;
}

int main() {
    ll t;

    cin >> t;    

    for (int i=0;i<t;i++) {
        solve();
    }    

    /*
    1 2
    2 3
    3 1
    1 4
    3 4

    1 4
    4 3
    3 1
    1 2
    3 2
    */

    //for (bool b : visited) cout << b << " ";

    
}