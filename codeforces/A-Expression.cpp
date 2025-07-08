// https://codeforces.com/problemset/problem/479/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>

using namespace std;

using ll = long long;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int ans = a + b + c;
    ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);

	cout << ans << endl;
}