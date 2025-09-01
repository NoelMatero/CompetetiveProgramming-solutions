// https://cses.fi/problemset/task/1751


#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

using ll = long long;

vector<int> p;
vector<int> ans;
bool in_cycle = false;

void dfs(int n, int starting_node) {
	if (ans[n] != -2) {		
		if (ans[n] == -1) {
			in_cycle = true;
			ans[n] = -3;

            ll cycle_length = 1;
            while (ans[p[n]] != -3) {
                cycle_length++;                
                n = p[n];                
            }

            ans[n] = cycle_length;
            //cout << ans[n] << " " << n << endl;

            while (ans[p[n]] != cycle_length) {
                n = p[n];                
                ans[n] = cycle_length;         
                //cout << ans[n] << " " << n << endl;       
            }
            // node n on cyclen viimeinen node, 
            // jote vastaus on starting_noden ja n välinen pituus, mikä on cyclen pituus

            

		}         
		return;  
	}

	ans[n] = -1; 

	dfs(p[n], starting_node);	

	if (ans[n] == -1) {		
		ans[n] = ans[p[n]] + 1;
	} else {		
		//ans[n] = ans[p[n]] + 1;
	}
}

int main() {
	int n;
	std::cin >> n;
	p = vector<int>(n);
	for (int &i : p) {
		std::cin >> i;
		i--;
	}

	ans = vector<int>(n, -2);  // -2 is our initial no-answer value
	for (int i = 0; i < n; i++) {
		// in_cycle is always reset to false at the end of each DFS
		dfs(i, i);
	}

	for (int i = 0; i < n; i++) { cout << (ans[i]) << " \n"[i == n - 1]; }
}