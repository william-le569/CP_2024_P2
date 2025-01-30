// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 1e6, M = 1e9 + 7;
// int n;
// ll dp[mxN+1];

// int main() {
//     cin >> n;
//     dp[0] = 1;
//     for(int i=1; i<=n; ++i) {
//         for(int j=1; j<=min(6, i); ++j)
//             dp[i]=(dp[i]+dp[i-j])%M;
//     }
    
//     cout << dp[n];
//     // for(int i=0; i<n; ++i) cout << dp[i] << endl;
// }


// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 1e6, M = 1e9 + 7;
// int n;
// ll dp[mxN+1];

// int main() {
//     cin >> n;
//     dp[0] = 1;
//     for(int i=1; i<=n; ++i) {
//         for(int j=1; j<=i; ++j) {
//             if(j>6) {
//                 dp[i] = (dp[i] + dp[i-6])%M;
//             }
//             else {
//                 dp[i] = (dp[i] + dp[i-j])%M;
//             }
//         }
//     }
    
//     cout << dp[n];
//     // for(int i=0; i<n; ++i) cout << dp[i] << endl;
// }

//----------at0

// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 1e6, M = 1e9 + 7;
// int n;
// ll dp[mxN+1];

// int main() {
//     cin >> n;
//     dp[0] = 1;
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= 6; ++j) {
//             if (j <= i) {
//                 dp[i] = (dp[i] + dp[i - j]) % M;
//             }
//         }
//     }

//     cout << dp[n];
//     // for (int i = 0; i < n; ++i) cout << dp[i] << endl;
//     return 0;
// }

// att1

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// const int mxN = 1e6, M = 1e9 + 7;

// ll dp[mxN + 1];

// int n;

// int main() {
//     cin >> n;
//     dp[0] = 1;
//     for(int i=1; i<=n; ++i) {
//         for(int j=1; j<= 6; ++j) {
//             if(j<=i) {
//                 dp[i] = (dp[i] +dp[i-j])%M; // dp[i-j] substate.
//             }
//         }
//     }
//     cout << dp[n];
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 1e6, M = 1e9+7;

ll dp[mxN + 1];
int n;

int main() {
    cin >> n;
    dp[0] = 1;
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=6; ++j) {
            if(j<=i) {
                dp[i] = (dp[i] + dp[i-j]) % M;
            }
        }
    }
    cout << dp[n];
    return 0;
}