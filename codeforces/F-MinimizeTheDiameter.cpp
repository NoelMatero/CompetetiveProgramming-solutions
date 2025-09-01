// https://codeforces.com/gym/104536/problem/F

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

using ll = long long;


vector<vector<ll>> adj_1;
vector<vector<ll>> adj_2;
vector<ll> dist_1;
vector<ll> dist_2;

void dfs_1(int node, int parent, int d) {
    dist_1[node] = d;
    for (int next : adj_1[node]) {
        if (next != parent) {
            dfs_1(next, node, d + 1);
        }
    }
}

void dfs_2(int node, int parent, int d) {
    dist_2[node] = d;
    for (int next : adj_2[node]) {
        if (next != parent) {
            dfs_2(next, node, d + 1);
        }
    }
}

int main() {
    ll n;

    cin >> n;

    adj_1.resize(n);
    dist_1.resize(n);

    for (int i=0;i<n-1;i++) {
        ll a, b;

        cin >> a >> b;

        adj_1[--a].push_back(--b);
        adj_1[b].push_back(a);
    }

    dfs_1(0, -1, 0);

    int farthest_node_1 = 0;
    for (int i = 0; i < n; i++) {
        if (dist_1[i] > dist_1[farthest_node_1]) {
            farthest_node_1 = i;
        }
    }

    dfs_1(farthest_node_1, -1, 0);

    int diameter_1 = 0;
    for (int i = 0; i < n; i++) {
        if (dist_1[i] > diameter_1) {
            diameter_1 = dist_1[i];
        }
    }

    ll n_2;

    cin >> n_2;

    adj_2.resize(n_2);
    dist_2.resize(n_2);

    for (int i=0;i<n_2-1;i++) {
        ll a, b;
        
        cin >> a >> b;

        adj_2[--a].push_back(--b);
        adj_2[b].push_back(a);
    }

    dfs_2(0, -1, 0);

    int farthest_node_2 = 0;
    for (int i = 0; i < n_2; i++) {
        if (dist_2[i] > dist_2[farthest_node_2]) {
            farthest_node_2 = i;
        }
    }

    dfs_2(farthest_node_2, -1, 0);

    int diameter_2 = 0;
    for (int i = 0; i < n_2; i++) {
        if (dist_2[i] > diameter_2) {
            diameter_2 = dist_2[i];
        }
    }

    int added = (diameter_1+1)/2 + (diameter_2+1)/2 + 1;
    cout << max({diameter_1, diameter_2, added}) << endl;
}