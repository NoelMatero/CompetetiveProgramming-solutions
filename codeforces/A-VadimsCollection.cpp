// https://codeforces.com/problemset/problem/2098/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    bool used[10] = {};
    string s;
    cin>>s;

    string new_str = "9999999999";

    // 9988776655
    // 9876556789
    
    // the smallest possible number will be placed onto the position where it can be placed to.
    // 98765... <- index 2s smallest number is 10-2. 
    // continue this logic until the number is greater than the index allows it
    // 56789 -> once the 1st rule does not matter we will start placing the smallest first.

    for (int i=0;i<10;i++) {
        int target = 10-(i+1);
        int min_num = 99;
        int index = 0;        
        for (int j=0;j<10;j++) {
            if (s[j]-'0'>=target && s[j]-'0'<min_num && !used[j]) {                
                index = j;                
                min_num = s[j]-'0';
            }
        }        

        used[index] = true;        
        //s[index] = char('*');
        new_str[i] = min_num + '0';        
    }    

    cout << new_str << endl;
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
}
