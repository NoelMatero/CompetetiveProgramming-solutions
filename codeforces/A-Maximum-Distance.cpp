// https://codeforces.com/gym/102951/ 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> x(n), y(n);

    for (int i=0;i<n;i++) {
        cin >> x[i];
    }

    for (int i=0;i<n;i++) {
        cin >> y[i];
    }

    int max_distance = -999999999;


    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            int curr_dist_x = (x[j]-x[i]);
            int curr_dist_y = (y[j]-y[i]);

            int combined = (curr_dist_x*curr_dist_x)+(curr_dist_y*curr_dist_y);
            
            if (combined > max_distance) max_distance = combined;
        }
    }

    cout << max_distance;

    return 0;    
}
