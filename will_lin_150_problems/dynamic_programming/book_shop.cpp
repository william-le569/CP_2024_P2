
// William's Solutions
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 1e3, mxX = 1e5, M = 1e9 + 7;
// int n, x, h[mxN], s[mxN], dp[mxX+1];

// int main() {
//     cin >> n >> x;
//     for(int i=0; i<n; ++i)
//         cin >> h[i];
//     for(int i=0; i<n; ++i)
//         cin >> s[i];
//     for(int i=0; i<n; ++i) 
//         for(int j=x; j>=h[i]; --j)
//             dp[j] = max(dp[j], dp[j-h[i]] + s[i]);
//     cout << dp[x];
//     return 0;
// }

// 4 10
// 4 8 5 3
// 5 12 8 1

// Priyansh - code

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> val(n);
//     vector<int> weight(n);

//     for(int i=0; i<n; ++i) {
//         cin >> weight[i];
//     }

//     for(int i=0; i<n; ++i) {
//         cin >> val[i];
//     }

//     vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
//     // dp[i][j] = max value that can be attained from first i elements,
//     // such that j weight is allowed to be used.

//     // base case
//     // dp[0][k] = 0 for every k because we cannot add any more value
//     // if 0 elements are left.
//     for(int i=1; i<=n; ++i) {  // 1-based indexing
//         for(int j=0; j<=x; j++) {
//             int w = weight[i-1];
//             int value = val[i-1];

//             int pick = (j >= w ? dp[i-1][j-w] + value : 0);
//             int skip = dp[i-1][j];

//             dp[i][j] = max(skip, pick);
//         }
//     }
//     cout << dp[n][x] << endl;
//     return 0;
// }


// Priyans - space optimization.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> val(n);
//     vector<int> weight(n);

//     for(int i=0; i<n; ++i) {
//         cin >> weight[i];
//     }

//     for(int i=0; i<n; ++i) {
//         cin >> val[i];
//     }

//     vector<int> prev(x + 1, 0);
//     // dp[i][j] = max value that can be attained from first i elements,
//     // such that j weight is allowed to be used.

//     // base case
//     // dp[0][k] = 0 for every k because we cannot add any more value
//     // if 0 elements are left.

//     for(int i = 1; i <= n; ++i) {
//         vector<int> curr(x + 1);
//         // dp[i][j] = curr[j]
//         // dp[i-1][j] = prev[j]
//         for(int j = 0; j <= x; ++j) {
//             int w = weight[i-1];
//             int value = val[i-1];
//             // two choices
//             // - pick up ith element
//             // - skip ith element
//             int pick = (j >= w ? prev[j - w] + value : 0);
//             int skip = prev[j];
//             // transition
//             curr[j] = max(skip, pick);
//         }
//         prev = curr;
//     }
//     cout << prev[x] << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
    vector<int> weight(n);
    vector<int> val(n);
    // for(int i=0; i<n; ++i) cin >> val[i];
    
    for(int i=0; i<n; ++i) cin >> weight[i];

    for(int i=0; i<n; ++i) cin >> val[i];

    for(int i=1; i<=n; ++i) {
        for(int j=0; j<=x; ++j) {
            int v = val[i-1];
            int w = weight[i-1];

            int skip, pick;

            pick = j >= w? dp[i-1][j-w] + v : 0;
            skip = dp[i-1][j];

            dp[i][j] = max(pick, skip);
        }
    }

    cout << dp[n][x];
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> val(n);
//     vector<int> weight(n);

//     for(int i=0; i<n; ++i) {
//         cin >> weight[i];
//     }

//     for(int i=0; i<n; ++i) {
//         cin >> val[i];
//     }

//     vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
//     // dp[i][j] = max value that can be attained from first i elements,
//     // such that j weight is allowed to be used.

//     // base case
//     // dp[0][k] = 0 for every k because we cannot add any more value
//     // if 0 elements are left.
//     for(int i=1; i<=n; ++i) {  // 1-based indexing
//         for(int j=0; j<=x; j++) {
//             int w = weight[i-1];
//             int value = val[i-1];

//             int pick = (j >= w ? dp[i-1][j-w] + value : 0);
//             int skip = dp[i-1][j];

//             dp[i][j] = max(skip, pick);
//         }
//     }
//     cout << dp[n][x] << endl;
//     return 0;
// }

