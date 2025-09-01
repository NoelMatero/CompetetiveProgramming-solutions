// https://cses.fi/problemset/task/1131

#include <iostream>
//#include <pair>
#include <unordered_set>
#include <vector>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int MAX = 2e5;
vector<vector<ll>> adj;
vector<ll> depth;
pair<ll, ll> furthest_node_1;
pair<ll, ll> furthest_node_2;

void dfs(ll n, ll p, bool node_1) {
    if (node_1) { 
                if (furthest_node_1.first < depth[n]) {
                    furthest_node_1 = pair(depth[n], n);
                }
            
            }
            else {
                if (furthest_node_2.first < depth[n]) {
                    furthest_node_2 = pair(depth[n], n);
                }
            }
    for (auto c : adj[n]) {
        if (c != p) {            
            depth[c] = depth[n]+1;            
            dfs(c, n, node_1);
        }
    }
}

int main() {
    ll n;

    cin >> n;

    adj.resize(n);
    depth.resize(n);

    furthest_node_1 = make_pair(0, 0);
    furthest_node_2 = make_pair(0, 0);

    for (int i=0;i<n-1;i++) {
        ll a, b;

        cin >> a >> b;

        adj[--a].push_back(--b);
        adj[b].push_back(a);
    }

    dfs(0, 0, true);

    depth.clear();
    depth.resize(n);
    
    dfs(furthest_node_1.second, furthest_node_1.second, false);
        
    cout << furthest_node_2.first << endl;    
}