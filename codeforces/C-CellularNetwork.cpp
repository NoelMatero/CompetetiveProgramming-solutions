// https://codeforces.com/contest/702/problem/C

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

using ll = long long;

int main() {
  ll n, m;

  cin >> n >> m;

  vector<int> cities(n);
  vector<int> towers(m);

  for (int i = 0; i < n; i++) {
    cin >> cities[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> towers[i];
  }

  ll tower = 0;
  ll city = 0;

  ll r = 0;
  ll last = __INT_MAX__;

  while (city < n) {
    ll cur = abs(towers[tower] - cities[city]);
    while (tower + 1 < m && abs(towers[tower + 1] - cities[city]) <= cur) {
      tower++;
      cur = abs(towers[tower] - cities[city]);
    }
    r = max(r, cur);
    city++;
  }

  cout << r << endl;
}
