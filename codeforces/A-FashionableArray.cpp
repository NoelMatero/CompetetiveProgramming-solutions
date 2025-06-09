// https://codeforces.com/problemset/problem/2110/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> nums(n);

    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());

    //int max = nums[n-1];
    //int min = nums[0];

    int l = 0;
    int r = n-1;
    int ans = 0;     

    if ((nums[l]+nums[r])%2==0) {
        cout << "0" << endl;
        return;
    }

    int odd_ans = 0;
    int even_ans = 0;
    
    if (nums[l]%2!=0) {        
        while (l<=r) {            
            if (nums[r]%2!=0) {                
                break;                          
            }
            odd_ans++;
            r--;
        }
        
        l=0;
        r=n-1;

        while (l<=r) {            
            if (nums[l]%2==0) {                
                break;                          
            }
            even_ans++;                   
            l++;
        }
    } else {
        while (l<=r) {            
            if (nums[r]%2==0) {                
                break;                          
            }
            even_ans++;
            r--;
        }
        
        l=0;
        r=n-1;

        while (l<=r) {            
            if (nums[l]%2!=0) {                
                break;                          
            }
            odd_ans++;                   
            l++;
        }
    }

    cout << min(odd_ans, even_ans) << endl;

        // objective: Find the largest 2 even or 2 odd numbers.
        // we can first find the 2 even numbers and then compare them to the 2 odd numbers.
                
        // 2 4 5 6 7 9 11
        // first even numbers are 2 and 6. diff: 3
        // first odd numbers are 5 and 11. diff: 2    
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        solve();
    }
}