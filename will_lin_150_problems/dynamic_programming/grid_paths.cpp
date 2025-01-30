#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 1e3, M = 1e9 + 7;
int n, dp[mxN][mxN];
string s[mxN];

int main() {
    cin >> n;
    for(int i=0; i<n; ++i) 
        cin >> s[i];
    dp[0][0] = 1;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            if(i)
                dp[i][j]+=dp[i-1][j];
            if(j)
                dp[i][j]+=dp[i][j-1];
            dp[i][j]%=M;
            if(s[i][j]=='*')
                dp[i][j] = 0;
        }
    }
    cout << dp[n-1][n-1];
}


// #include <bits/stdc++.h>
// using namespace std;

// const int mxN = 1e3, MOD = 1e9 + 7;

// int main() {
//     int n;
//     cin >> n;
//     // vector<vector<int> dp(n+1, vector<int>(n+1));
//     bool grid[n+1][n+1]; // author start the grid from 1.1
//     for(int i=1; i<n+1; ++i) {
//         for(int j=1; j<n+1; ++j) {
//             char c;
//             cin >> c;
//             if(c == '.') grid[i][j] = 0;
//             else grid[i][j] = 1; // obstacles.
//         }
//     }

//     int dp[n+1][n+1];
//     for(int i=n; i>=1; --i) {
//         for(int j=n; j>=1; --j) {
//             if(i == n && j == n)
//                 dp[i][j] = 1;
//             else {
//                 int op1 = (j==n)?0:dp[i][j+1];
//                 int op2 = (i==n)?0:dp[i+1][j];
//                 dp[i][j] = (op1 + op2) % MOD;
//                 if(grid[i][j])
//                     dp[i][j] = 0;
//             }
//         }
//     }
//     if(grid[n][n])
//         cout << 0;
//     else cout << dp[1][1];    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// const int mxN = 1e3, MOD = 1e9 + 7;

// int main() {
//     int n;
//     cin >> n;

//     vector<vector<int>> dp(n+1, vector<int>(n+1));
//     vector<vector<int>> grid(n+1, vector<int>(n+1));

//     for(int i=1; i<=n; ++i) {
//         for(int j=1; j<=n; ++j) {
//             char c;
//             cin >> c;
//             if(c=='*') grid[i][j] = 1;
//             else grid[i][j] = 0;
//         }
//     }

//     for(int i=n; i>=1; --i) {
//         for(int j=n; j>=1; --j) {
//             if((i==n)&&(j==n)) dp[i][j] = 1;
//             else {
//                 int op1 = (j==n)?0:dp[i][j+1];
//                 int op2 = (i==n)?0:dp[i+1][j];
//                 dp[i][j] = (op1+op2) % MOD;
//                 if(grid[i][j]) dp[i][j] = 0;
//             }
//         }
//     }

//     if(grid[n][n]) cout << 0;
//     else cout << dp[1][1];

//     return 0;
// }