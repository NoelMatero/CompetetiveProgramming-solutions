// https://cses.fi/problemset/task/2179/

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <climits>
 
using namespace std;
 
using ll = long long;

const int SZ = 2e5;

vector<vector<ll>> adj;
vector<ll> dist;
ll subtree_size[SZ];
ll subtree_distance[SZ], depth[SZ];
ll ans[SZ];
ll outdegree[SZ];
vector<vector<ll>> switched_edges;

ll n;

void dfs(ll node, ll parent, ll d) {    
    if (node != parent) {
        if (outdegree[node] % 2 != 0 && outdegree[parent] % 2 != 0) {
                cout << node+1 << " " << parent+1 << endl;
                switched_edges[node].push_back(parent); //.push_back(make_pair(node, parent));
            } else {
                cout << parent+1 << " " << node+1 << endl;
                switched_edges[parent+1].push_back(node+1);
                /*
                0 -1
                1 0
                2 1
                0 -1
                3 2
                
                1 0
                2 1
                1 0
                4 3
                */
            }                                     
    }    
    for (ll next : adj[node]) {
        if (next != parent) {                       
            dfs(next, node, d + 1);                 
        }        
    }
}

int main() {
    ll m;

    cin >> n >> m;

    adj.resize(n);
    dist.resize(n);
    switched_edges.resize(n);

    for (int i=0;i<m;i++) {
        ll a, b;

        cin >> a >> b;

        adj[--a].push_back(--b);
        outdegree[a]++;              
        //adj[b].push_back(a);
    }

    ll even=0, odd = 0;

    for (int i=0;i<m;i++) {
        //cout << outdegree[i] << " ";
        if (outdegree[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }    

    if (even != odd) {
        cout << "IMPOSSIBLE" << endl;
        //return 0;
    }

    dfs(0, 0, 0);

    for (int i=0;i<switched_edges.size();i++) {
        for (int n : switched_edges[i]) {
            //cout << i+1 << " " << n+1 << endl;
        }
    }
                
}