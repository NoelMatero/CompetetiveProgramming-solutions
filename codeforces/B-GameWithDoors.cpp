// https://codeforces.com/problemset/problem/2004/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <cmath>
#include <cctype>

using namespace std;

using ll = long long;

void solve() {
    ll l_1, r_1;
    ll l_2, r_2;

    cin >> l_1 >> r_1 >> l_2 >> r_2;

    vector<char> rooms(max(r_1, r_2));

    ll a_count = (r_1-l_1)+1;; ll b_count = (r_2-l_2)+1;;

    for (int i=(min(l_1, l_2))-1;i<max(r_1, r_2);i++) rooms[i] = '*';
    for (int i=l_1-1;i<r_1;i++) rooms[i] = 'A'; //a_count++;
    for (int i=l_2-1;i<r_2;i++) rooms[i] = 'B'; //b_count++;

    for (char i : rooms) if (i=='A') { a_count--; }     

    cout << a_count + ((l_1 != l_2) + (r_1 != r_2)) - 1<< endl;

    /*
    * * * *

    A A | B B

    * * * * *
      A A A A
       * * *  
      B B B B 

    * * * * * * *
        A A A A A 
             * * 
              B B

        A A A B B 
              
    * * * * * * * *
          A A
         * * *
      B B B B B B B 

    * * * * *
    A A A 
     * * *
      B B B B
    */
    

}

int main() {
    ll t;

    cin >> t;

    for (int i=0;i<t;i++) {
        solve();
    }
}