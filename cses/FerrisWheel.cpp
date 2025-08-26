// https://cses.fi/problemset/task/1090

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

using ll = long long;

int main() {
  ll n, x;

  cin >> n >> x;

  vector<ll> child(n);

  for (int i = 0; i < n; i++) {
    cin >> child[i];
  }

  sort(child.begin(), child.end());

  ll ans = 0;
  ll count = 0;

  ll l = 0, r = n - 1;

  while (l <= r) {
    if (child[l] + child[r] > x) {
      ans++;
      r--;
    } else if (child[l] + child[r] <= x) {
      ans++;
      l++;
      r--;
    }
  }

  cout << ans << endl;

  /*
  3 10
  1 2 3

  2
  1

  2 4 7 9
  29
  47

  4
  4
  */
}
