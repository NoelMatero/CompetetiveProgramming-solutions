// https://cses.fi/problemset/task/1192
 
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <climits>
 
using namespace std;
 
using ll = long long;
 
const int MAX = 1000;
char grid[MAX][MAX];
ll row_num; ll col_num;
bool vistited[MAX][MAX];
 
void floodfill(ll n, ll m, char type) {
    if (n < 0 || m < 0 || n >= row_num || m >= col_num || type == '#' || vistited[n][m]) return;
 
    vistited[n][m] = true;
    floodfill(n+1, m, grid[n+1][m]);
    floodfill(n, m+1, grid[n][m+1]);
    floodfill(n-1, m, grid[n-1][m]);
    floodfill(n, m-1, grid[n][m-1]);
}
 
int main() {
    ll n, m;
 
    cin >> row_num >> col_num;
 
    for (int i=0;i<row_num;i++) {
        for (int j=0;j<col_num;j++) {
            cin >> grid[i][j];
        }
    }
 
    ll ans = 0;
 
    for (int i=0;i<row_num;i++) {
        for (int j=0;j<col_num;j++) {
            if (!vistited[i][j] && grid[i][j] == '.') {
                floodfill(i, j, grid[i][j]);
                ans++;                
            }
        }
    }
 
    cout << ans << endl;
}