// https://cses.fi/problemset/task/1622 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cin >> word;

    sort(word.begin(), word.end());

    vector<string> permutation;

    do {
        permutation.push_back(word);
    } while (next_permutation(word.begin(),word.end()));

    cout << permutation.size() << endl;
    for (const string &s : permutation) { cout << s << endl; }
}