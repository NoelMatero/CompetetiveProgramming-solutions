// https://codeforces.com/contest/803/problem/D

#include <iostream>
#include <vector>
#include <string>
using namespace std;

using ll = long long;

string input;
ll k;
vector<int> word_lengths;

bool possible(ll x, ll k) {
    ll cur_size = 0;
    ll used_lines = 0;

    for (int len : word_lengths) {
        if (len > x) return false; 

        if (cur_size + len > x) {
            used_lines++;
            cur_size = len;
        } else {
            cur_size += len;
        }
    }

    if (cur_size > 0) used_lines++;
    return used_lines <= k;
}

ll first_true(ll low, ll high, ll k) {    
    high++;    
    while (low < high) {
        ll mid = low + (high - low) / 2;  
        if (possible(mid, k)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low; 
}

int main() {
    cin >> k;
    cin.ignore(); 
    getline(cin, input);     
    
    word_lengths.push_back(0);
    for (char c : input) {
        word_lengths.back()++;
        if (c == ' ' || c == '-') word_lengths.push_back(0);
    }

    cout << first_true(1, input.size(), k) << endl;
}
