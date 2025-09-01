// https://codeforces.com/contest/2136/problem/A

#include <bits/stdc++.h>
using namespace std;

bool ok(int X, int Y){
    int M = max(X,Y), m = min(X,Y);
    return M <= 2*(m+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; if(!(cin>>t)) return 0;
    
    while(t--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        bool half1 = ok(a,b);
        bool half2 = ok(c-a, d-b);
        cout << (half1 && half2 ? "YES\n" : "NO\n");
    }
}
