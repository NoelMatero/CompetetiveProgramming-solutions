// https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
    int n,m,a;
    cin>>n>>m>>a;

    if (a <= n && a <= m) {
        cout << (n-a)+(m-a);
    }

    if (a>n) {
        cout << a-m;
    }

    if (a>m) {
        cout << a-n;
    }

    //cout << 
}