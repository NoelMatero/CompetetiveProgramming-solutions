// https://codeforces.com/problemset/problem/2096/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<string> ans(n + 1);  // each position stores a full number as string

    int smaller_count = 0;
    int bigger_count = n;    

    for (int i=s.size()-1;i>=0;i--) {        
        if (s[i] == '<') { 
            smaller_count++; 
            ans[i+1] = to_string(smaller_count);
        }
        else {                        
            ans[i+1] = to_string(bigger_count);            
            bigger_count--;
        }

        
    }

    bool bigger = false;

for (const string& c : ans) {
    if (!c.empty() && stoi(c) == bigger_count) {
        bigger = true;
    }
}


    if (bigger) cout << smaller_count;
    else if (!bigger) cout << bigger_count;

    for (auto& s : ans) cout << s << " ";

    cout << endl;    
}

int main() {    
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
}