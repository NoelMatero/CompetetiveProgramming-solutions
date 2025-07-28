#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "") {  // name is nonempty for USACO file I/O
	ios_base::sync_with_stdio(0);
	cin.tie(0);  // see Fast Input & Output
	// alternatively, cin.tie(0)->sync_with_stdio(0);
	if (!name.empty()) {
		freopen((name + ".in").c_str(), "r", stdin);  // see Input & Output
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main() {
	setIO("haybales");
	int bale_num;
	int query_num;
	cin >> bale_num >> query_num;
	vector<int> bales(bale_num);
	for (int i = 0; i < bale_num; i++) { cin >> bales[i]; }

	sort(begin(bales), end(bales));
	for (int i = 0; i < query_num; i++) {
		int q_start;
		int q_end;
		cin >> q_start >> q_end;
		cout << upper_bound(begin(bales), end(bales), q_end) -
		            lower_bound(begin(bales), end(bales), q_start)
		     << "\n";
	}
}