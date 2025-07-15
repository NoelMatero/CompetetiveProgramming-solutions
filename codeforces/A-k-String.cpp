// https://codeforces.com/problemset/problem/219/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>
#include <cctype>

using namespace std;

using ll = long long;

int main() {
    ll k;
    cin >> k;

    string s;
    cin >> s;

    unordered_map<char, int> freq;

    for (int i=0;i<s.length();i++) {
        freq[s[i]]++;
    }    

    int required = s.length()/k;

    for (int i=0;i<s.length();i++) {
        if (freq[s[i]]%k!=0) {
            cout << -1 << endl;
            return 0;
        } else if (freq[s[i]]==1 && k!=s.length()) {
            cout << -1 << endl;
            return 0;
        }
    }    

    // for the string s to be a k-string, 
    // it needs to be of size s, such that 
    // s%k==0

    // the string needs to contain 

    if (s.length()%k!=0) {
        cout << -1 << endl;
        return 0;
    }

    string ans;
    //ans.resize(s.length()/k);    
    // will be of size s.length()/k;

    for (auto& [ch, count] : freq) {
        for (int i=0;i<freq[ch]/k;i++) {
            ans.push_back(ch);
        }
    }

    for (int i=0;i<k;i++) {
        cout << ans;
    }    

    cout << endl;

    //if (freq.size() > )

    /*
    there needs to be a string s
    of length i so that s/k = i
    
    the original string needs to
    have characters so that the new
    string 

    
    */


}