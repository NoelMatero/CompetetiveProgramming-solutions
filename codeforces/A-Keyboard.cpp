// https://codeforces.com/problemset/problem/474/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    char c;
    cin >> c;

    string ans;

    string s;
    cin >> s;  
    
    ans.resize(s.length());

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    // R
    // s;;upimrrfod;pbr


    if (c == 'R') {
        for (int j=0;j<s.length();j++) {
            for (int i=0;i<keyboard.length();i++) {
                if (s[j] == keyboard[i]) {
                    ans[j] = keyboard[i-1];
                }
            }
        }        
    } else {
        for (int j=0;j<s.length();j++) {
            for (int i=0;i<keyboard.length();i++) {
                if (s[j] == keyboard[i]) {
                    ans[j] = keyboard[i+1];
                }
            }
        }        
    }

    cout << ans << endl;
}