#include <iostream>
#include <map>
#include <vector>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int N;
	cin >> N;
	vector<int> T(N);
	for (int i = 0; i < N; i++) { cin >> T[i]; }
 
	long long prefix_sum = 0;
	long long ans = 0;
	map<long long, int> sums;
	sums[0] = 1;
	for (int x : T) {
		prefix_sum += x;
		int mod = (prefix_sum % N + N) % N;
        cout << prefix_sum % N << endl;
        cout << mod << endl;
        ans += sums[mod];		
		sums[mod]++;
	}
	cout << ans << endl;
}