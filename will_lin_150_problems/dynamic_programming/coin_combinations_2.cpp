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
//     for(int j=0; j<n; ++j) {
//         for(int i=1; i<=x; ++i) {
//             // dp[i] = 1e9;
        
//                 if(c[j]<=i) {
//                     dp[i] = (dp[i] + dp[i-c[j]])%M;
//                 }
//             }
//     }
//     // if(dp[x] >= 1e9) cout << -1;
//     // else cout << dp[x];
//     cout << dp[x];
//     return 0;
// }

// 3 9 2 3 5

// Indian's solution

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// const int mxN = 1e2, mxX = 1e6, MOD = 1e9 + 7;

// ll dp[mxN][mxX+1];

// void solve() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n);
//     for(int i=0; i<n; ++i) {
//         cin >> a[i];
//     }

//     vector<vector<int>> dp(n+1, vector<int>(x+1));

//     for(int i=0; i<n; ++i) {
//         dp[i][0] = 1;
//     }

//     for(int i=n-1; i>=0; --i) {
//         for(int sum=1; sum<=x; sum++) {
//             int skipping = dp[i+1][sum];
//             int picking = 0;
//             if(a[i] <= sum) {
//                 picking = dp[i][sum-a[i]];
//             }
//             dp[i][sum] = (skipping + picking) % MOD;
//         }
//     }

//     cout << dp[0][x] << endl;
// }

// int main() {
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 1e2, mxX = 1e6, MOD = 1e9 + 7;

int main() {
    int n, x;
    // int c[n];
    cin >> n >> x;
    vector<int> c(n);
    for(int i=0; i<n; ++i) {
        cin >> c[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(x+1));

    for(int i=0; i<=n; ++i) {
        dp[i][0] = 1;
    }

    for(int j=n-1; j>=0; --j) {
        for(int i=1; i<=x; ++i) {
            int skipping, picking;
            skipping = dp[j+1][i];
            picking = 0;
            if(c[j]<=i) {
                picking = dp[j][i-c[j]];
            }
            dp[j][i] = (skipping + picking)%MOD;
        }
    }

    cout << dp[0][x];

    return 0;
}