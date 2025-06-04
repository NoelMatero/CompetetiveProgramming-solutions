// https://cses.fi/problemset/task/1624

#include <iostream>
#include <vector>
using namespace std;

int DIMENSION = 8;

vector<vector<bool>> reserved(DIMENSION, vector<bool>(DIMENSION));

vector<bool> taken_row(DIMENSION);
vector<bool> taken_diag_1(2*DIMENSION-1);
vector<bool> taken_diag_2(2*DIMENSION-1);

int ans = 0;

void solve(int r) {
    if (r == DIMENSION) {
        ans++;
        return;
    }

    for (int i=0;i<DIMENSION;i++) {
        if (taken_row[i] || taken_diag_1[r+i] || taken_diag_2[i-r+DIMENSION-1] || reserved[r][i]) continue;
        taken_row[i] = taken_diag_1[r+i] = taken_diag_2[i-r+DIMENSION-1] = true;
        solve(r+1);
        taken_row[i] = taken_diag_1[r+i] = taken_diag_2[i-r+DIMENSION-1] = false;
    }
}

int main() {
    for (int i=0;i<DIMENSION;i++) {
        string row;
        cin >> row;
        for (int j=0;j<DIMENSION;j++) {
            reserved[i][j] = row[j] == '*';
        }
    }

    solve(0);

    cout << ans;
}