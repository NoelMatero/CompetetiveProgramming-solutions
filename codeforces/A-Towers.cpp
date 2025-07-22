#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <cmath>
#include <unordered_map>

using namespace std;

using ll = long long;

int main() {
    ll n;

    cin >> n;

    unordered_map<int, int> freq;

    set<int> ans_2;

    for (int i=0;i<n;i++) {
        int a;
        cin >> a;
        ans_2.insert(a);
        freq[a]++;
    }

    int ans = 0;

    for (auto a : freq) {
        ans = max(ans, a.second);
    }

    cout << ans << " " << ans_2.size() << endl;
}