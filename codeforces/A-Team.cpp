// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count_2 = 0;
    for (int i=0;i<n;i++) {
        int count = 0;
        for (int j=0;j<3;j++) {
            int num;
            cin >> num;

            if (num == 1) {
                count++;
            }
        }
        if (count >= 2) {
            count_2++;
        }
    }

    cout << count_2;
}