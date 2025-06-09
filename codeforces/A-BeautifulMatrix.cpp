// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            int type;
            cin >> type;

            if (type == 1) {                
                cout << abs((3-(i+1)))+abs((3-(j+1)));                
            }
        }
    }
}