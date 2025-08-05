// https://codeforces.com/problemset/problem/1117/C

#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

using ll = long long;

vector<ll> weather_x, weather_y;
ll x_1, y_1, x_2, y_2;
string weather;

bool f(ll mid, ll n) {
    ll full_cycles = mid / n;
    ll rem = mid % n;

    ll wind_x = full_cycles * weather_x[n] + weather_x[rem];
    ll wind_y = full_cycles * weather_y[n] + weather_y[rem];

    ll new_x = x_1 + wind_x;
    ll new_y = y_1 + wind_y;

    ll dist = abs(x_2 - new_x) + abs(y_2 - new_y);
    return dist <= mid;
}

int main() {
    cin >> x_1 >> y_1;
    cin >> x_2 >> y_2;

    ll n;
    cin >> n;
    cin >> weather;

    weather_x.resize(n + 1);
    weather_y.resize(n + 1);

    for (int i = 0; i < n; ++i) {
        weather_x[i + 1] = weather_x[i];
        weather_y[i + 1] = weather_y[i];
        if (weather[i] == 'U') weather_y[i + 1]++;
        else if (weather[i] == 'D') weather_y[i + 1]--;
        else if (weather[i] == 'R') weather_x[i + 1]++;
        else if (weather[i] == 'L') weather_x[i + 1]--;
    }

    ll lo = 0, hi = 1e18;
    while (hi - lo > 1) {
        ll mid = (lo + hi) / 2;
        if (f(mid, n)) hi = mid;
        else lo = mid;
    }

    if (!f(hi, n) || hi > 5e17) cout << -1 << '\n';
    else cout << hi << '\n';
}
