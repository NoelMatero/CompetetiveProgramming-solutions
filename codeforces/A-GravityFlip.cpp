// https://codeforces.com/problemset/problem/405/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    int n;
    cin>>n;

    vector<int> sum(n);

    for (int i=0;i<n;i++) {
        cin>>sum[i];
    }

    sort(sum.begin(), sum.end());

    for (int i : sum) {
        cout << i << " ";
    }    
}