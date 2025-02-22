// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 1e5, mxM = 100, M = 1e9 + 7;
// int n, m, a[mxN];
// ll dp[mxN][mxM];


// int main() {
//     cin >> n >> m;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i];
//         --a[i];
//     }
//     for(int i=0; i<n; ++i) {
//         if(i) {
//         for(int j=0; j<m; ++j) {
//             dp[i][j] = dp[i-1][j];
//             if(j)
//                 dp[i][j] += dp[i-1][j-1];
//             if(j<m-1)
//                 dp[i][j] += dp[i-1][j+1];
//             dp[i][j]%=M;
//         }
//         } else
//             for(int j=0; j<m; ++j)
//                 dp[0][j] = 1;
//         if(~a[i])
//             for(int j=0; j<m; ++j)
//                 if(j^a[i])
//                     dp[i][j] = 0;
//     }
//     ll ans = 0;
//     for(int i=0; i<m; ++i)
//         ans+=dp[n-1][i];
//     cout << ans%M;
//     return 0;
// }

// 3 5 
// 2 0 2

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

bool valid(int x, int m){
    return x >= 1 && x <= m;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(m+1));

    for(int i=1; i<=m; ++i) {
        if(a[0]==i || a[0]==0)
            dp[1][i] = 1;
    }
    for(int i=2; i<=n; ++i) {
        for(int k=1; k<=m; ++k) {
            // Explicitly reset dp[i][k] to 0 for clarity
            dp[i][k] = 0;
            if(a[i-1] != 0 && a[i-1] != k) {
                continue;
            }

            for(int prev=k-1; prev<=k+1; prev++) {
                if(!valid(prev, m)) {
                    continue;
                }
                dp[i][k] = (dp[i][k] + dp[i-1][prev]) % MOD;
            }
        }
    }

    int ans = 0;
    for(int i=1; i<=m; ++i) {
        ans = (ans + dp[n][i]) % MOD;
    }

    cout << ans;
    return 0;
}