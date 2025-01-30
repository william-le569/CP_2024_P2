// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> dp(n+1, 1e9); //dp[i] : min of #transitions.
//     dp[0] = 0; // base case
//     for(int i=1; i<=n; ++i) {
//         string a = to_string(i);
//         for(char c : a) {
//             int digit = c - '0';
//             if(digit != 0) {
//                 dp[i] = min(dp[i], dp[i-digit] + 1);
//             }
//         }
//     }
//     cout << dp[n] << endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// const int mxN = 1e6;
// int n, dp[mxN+1];

// int main() {
//     cin >> n;
//     for(int i=1; i<=n; ++i) {
//         dp[i] = 1e9;
//         int i2=i;
//         while(i2) {
//             dp[i] = min(dp[i], dp[i-i2%10]+1);
//             i2/=10;
//         }
//     }
//     cout << dp[n];
//     return 0;
// }

// first solution

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 1e6;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n+1);

    dp[0] = 0;

    for(int i=1; i<=n; ++i) {
        int i2 = i;
        dp[i] = 1e9;
        while(i2) {
            dp[i] = min(dp[i], dp[i-i2%10]+1);
            i2/=10;
        }
    }

    cout << dp[n];

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// const int mxN = 1e6;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> dp(n+1, 1e9);
//     dp[0] = 0;
//     for(int i=1; i<=n; ++i) {
//         string a = to_string(i);
//         for(char c:a) {
//             int digit = c - '0';
//             if(digit != 0) {
//                 dp[i] = min(dp[i], dp[i-digit] + 1);
//             }
//         }
//     }
//     cout << dp[n];
//     return 0;
// }