// // Accepted
// method 1

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// // game 2048
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     vector<int> dp[n];
//     dp[0].push_back(1);
//     // for(auto a:dp[0]) cout << a << " ";
//     // cout << dp[0][0];
//     int tmp;
//     for(int i=1; i<n; ++i) { // 0-based so 1 equal to 2 in 1 based.
//         // check the last 2 elements
//         // of previous dp
//         if(dp[i-1].size() >= 1) {
//             if(dp[i-1][dp[i-1].size()-1] == 1) {
//                 dp[i] = dp[i-1];
//                 tmp = dp[i][dp[i].size()-1];
//                 dp[i].pop_back();
//                 dp[i].push_back(tmp + 1); // dk: i >= 1 (ofcourse) && size [i-1] >= 1
//             }
//             else {
//                 // inherit the previous dp
//                 dp[i] = dp[i-1];
//                 dp[i].push_back(1);
//             }
//             while ((dp[i].size() >= 2) && (dp[i][dp[i].size()-1] == dp[i][dp[i].size()-2]) ) {
//                 tmp = dp[i][dp[i].size()-1];
//                 dp[i].pop_back();
//                 dp[i].pop_back();
//                 dp[i].push_back(tmp + 1);
    
//             }
//         }
//     }
//     for(auto& a:dp[n-1]) cout << a << " ";
//     return 0;
// }

// method 2 bitmask

#include <cstdio>
#include <iostream>
 
using namespace std;
 
int main() {
    int N;
    cin >> N;
    for (int i = 20; i >= 0; --i) {
        if (N & (1 << i)) {
            cout << i +1  <<  ' ';
        }
    }
    return 0;
}