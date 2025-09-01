// https://cses.fi/problemset/task/1133

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

ll n;

void dfs(ll node, ll parent, ll d) {
    subtree_size[node] = 1;
    subtree_distance[node] = d;    
    dist[node] = d;
    for (ll next : adj[node]) {
        if (next != parent) {
            depth[next] = depth[node] + 1;  
            dfs(next, node, d + 1);            
            subtree_size[node] += subtree_size[next];
            subtree_distance[node] += subtree_distance[next];
            //ans[next] = subtree_distance[node]-subtree_size[next]+(n-subtree_size[next]);            
        }        
    }
}

void final_dfs(ll node, ll parent) {
    for (ll next : adj[node]) {
        if (next != parent) {
            ans[next] = ans[node]-subtree_size[next]+(n-subtree_size[next]);
            final_dfs(next, node);
        }
    }
}

int main() {
    //ll n;

    cin >> n;

    adj.resize(n);
    dist.resize(n);

    for (int i=0;i<n-1;i++) {
        ll a, b;

        cin >> a >> b;

        adj[--a].push_back(--b);
        adj[b].push_back(a);
    }

    dfs(0, -1, 0);
    
    ans[0] = subtree_distance[0];

    final_dfs(0, 0);    

    for (int i=0;i<n;i++) {    
        cout << ans[i] << " ";
        //cout << endl;
    }    

}