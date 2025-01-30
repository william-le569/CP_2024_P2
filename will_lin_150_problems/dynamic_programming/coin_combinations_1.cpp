// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 100, mxX = 1e6, M = 1e9 + 7;

// ll dp[mxX+1];
// int n, x;
// int c[mxN];

// int main() {
//     cin >> n >> x;
//     for(int i=0; i<n; ++i) cin >> c[i];
//     dp[0] = 1;
//     for(int i=1; i<=x; ++i) {
//         for(int j=0; j<n; ++j) {
//             if(c[j]<=i) {
//                 dp[i] = (dp[i] + dp[i-c[j]])%M;
//             }
//         }
//     }
//     cout << dp[x];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxX = 1e6, mxN = 100, M = 1e9 + 7;

// ll dp[mxX + 1];
// int c[mxN];

// int n, x;

// int main() {
//     cin >> n >> x;
//     for(int i=0; i<n; ++i) cin >> c[i];
//     dp[0] = 1;
//     for(int i=1; i<=x; ++i) {
//         for(int j=0; j<n; ++j) {
//             if(c[j]<=i) {
//                 dp[i] = (dp[i] + dp[i-c[j]])%M;
//             }
//         }
//     }

//     cout << dp[x];
//     return 0;
// }

//--- attempt 3

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 1e2, mxX = 1e6, M = 1e9 + 7;
ll dp[mxX + 1];
int c[mxN];
int n, x; 

int main() {
    cin >> n >> x;
    for(int i=0; i<n; ++i) cin >> c[i];
    dp[0] = 1;
    for(int i=1; i<=x; ++i) {
        for(int j=0; j<n; ++j) {
            if(c[j]<=i) {
                dp[i] = (dp[i] + dp[i-c[j]]) % M;
            }
        }
    }
    cout << dp[x];
    return 0;
}