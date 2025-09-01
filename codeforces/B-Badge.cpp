// https://codeforces.com/contest/1020/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

using ll = long long;

vector<vector<ll>> adj;
vector<ll> visited;
vector<ll> ans;

void dfs(ll node, ll starting_node) {
    //cout << node << " " << visited[node] << " " << starting_node << endl;
    if (visited[node] == 1) {
        ans[starting_node] = node;
        return;
    } else {
        visited[node] = 1;

        for (int neightbor : adj[node]) {
            dfs(neightbor, starting_node);
        }
    }
}

int main() {
    int n;

    cin >> n;

    adj.resize(n);
    visited.resize(n);
    ans.resize(n);    

    for (int i=0;i<n;i++) {
        ll a;
        
        cin >> a;

        adj[i].push_back(--a);
    }

    for (int i=0;i<n;i++) {
        dfs(i, i);
        //ans.clear();        
        fill(visited.begin(), visited.end(), 0);
    }

    for (int i : ans) cout << i+1 << " ";
}