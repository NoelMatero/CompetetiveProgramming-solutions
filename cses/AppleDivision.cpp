// https://cses.fi/problemset/result/13164478/

#include <iostream>
#include <vector>
using namespace std;

vector<long long> apples;
int n;

long long search_difference(int k, long long group_1, long long group_2) {
    if (k == n) {
        return abs(group_1-group_2);
    } else {
        return min(search_difference(k+1, group_1+apples[k], group_2), search_difference(k+1, group_1, group_2+apples[k]));        
    }
}

int main() {          
    cin>>n;
    apples.resize(n);

    for (int i=0;i<n;i++) {
        cin>>apples[i];
    }

    cout << search_difference(0, 0, 0) << endl;
    
    return 0;    
}

