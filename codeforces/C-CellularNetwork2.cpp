// https://codeforces.com/contest/702/problem/C

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> cities(n), towers(m);
    for (int i = 0; i < n; ++i) cin >> cities[i];
    for (int i = 0; i < m; ++i) cin >> towers[i];

    sort(towers.begin(), towers.end());

    int result = 0;

    for (int i = 0; i < n; ++i) {
        int city = cities[i];
        auto it = lower_bound(towers.begin(), towers.end(), city);

        int dist;

        if (it == towers.end()) {
            dist = abs(city - towers.back());
        } else if (it == towers.begin()) {            
            dist = abs(city - towers.front());
        } else {        
            int right = *it;
            int left = *(it - 1);
            dist = min(abs(city - left), abs(city - right));
        }

        result = max(result, dist);
    }

    cout << result << endl;
    return 0;
}
