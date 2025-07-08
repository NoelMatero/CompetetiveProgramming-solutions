// https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>

using namespace std;

using ll = long long;

int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;
    
    long long tiles_along_n = static_cast<long long>(std::ceil(static_cast<double>(n) / a));
    long long tiles_along_m = static_cast<long long>(std::ceil(static_cast<double>(m) / a));

    std::cout << tiles_along_n * tiles_along_m << "\n";
    return 0;
}