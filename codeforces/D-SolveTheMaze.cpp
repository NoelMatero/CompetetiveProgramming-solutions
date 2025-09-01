// https://codeforces.com/contest/1365/problem/D

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int MAX = 1000;
char grid[MAX][MAX];
ll row_num; ll col_num;
bool visited[MAX][MAX];
vector<pair<int, int>> B;

void floodfill(int r, int c) {
	if (r < 0 || r >= row_num || c < 0 || c >= col_num) return;
	if (grid[r][c] == '#' || visited[r][c]) return;
	visited[r][c] = true;
	floodfill(r + 1, c);
	floodfill(r - 1, c);
	floodfill(r, c + 1);
	floodfill(r, c - 1);

}

void solve() {
    memset(grid, '.', sizeof(grid));
	memset(visited, 0, sizeof(visited));
    B.clear();

    cin >> row_num >> col_num;    

    bool possible = true;

    for (int i=0;i<row_num;i++) {
        for (int j=0;j<col_num;j++) {
            cin >> grid[i][j];       
            if (grid[i][j] == 'B') {
               B.push_back({i, j});
            }     
        }
    }

    for (auto &a : B) {
        int x = a.first, y = a.second;
        
        if (x-1 >= 0) {
            if (grid[x-1][y] == 'G') possible = false;
            else if (grid[x-1][y] == '.') grid[x-1][y] = '#';
        }        
        if (y-1 >= 0) {
            if (grid[x][y-1] == 'G') possible = false;
            else if (grid[x][y-1] == '.') grid[x][y-1] = '#';
        }
        if (x+1 < row_num) {
            if (grid[x+1][y] == 'G') possible = false;
            else if (grid[x+1][y] == '.') grid[x+1][y] = '#';
        }
        if (y+1 < col_num) {
            if (grid[x][y+1] == 'G') possible = false;
            else if (grid[x][y+1] == '.') grid[x][y+1] = '#';
        }
    }

    if (!possible) {
        cout << "NO" << endl;
        return;
    }

    floodfill(row_num-1, col_num-1);       

    for (int i=0;i<row_num;i++) {
        for (int j=0;j<col_num;j++) {
            if (grid[i][j] == 'G' && !visited[i][j]) {
                cout << "No\n";
				return;
            }
        }        
    }    
    
    cout << "Yes\n";
}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }    
}