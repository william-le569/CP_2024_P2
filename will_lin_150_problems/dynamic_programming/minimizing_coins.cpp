// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 100, mxX = 1e6, M = 1e9+7;
// int n, c[mxN], x;
// ll dp[mxX+1];

// int main() {
//     cin >> n >> x;
//     for(int i=0; i<n; ++i)
//         cin >> c[i];
   
//     for(int i=1; i<=x; ++i) {
//         dp[i] = 1e9; // tim in gan max
//                     // sample 1 3 5 11 -> 5 + 5 + 1
//         for(int j=0; j<n; ++j) {
//             if(c[j]<=i) 
//                 dp[i] = min(dp[i], dp[i-c[j]]+1);
//         }
//     }
//     if(dp[x]>=1e9)
//         cout << -1;
//     else
//         cout << dp[x];
//     return 0;
// }

// attempt1

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 100, mxX = 1e6, M = 1e9+7;
// int n, x, c[mxN];
// ll dp[mxX+1];

// int main() {
//     cin >>n >> x;
//     for(int i=0; i<n; ++i)
//         cin >> c[i];
//     for(int i=1; i<=x; i++) {
//         dp[i] = 1e9;
//         for(int j=0; j<n; ++j) { // Đối với mỗi lần tính giá trị build-up đều lướt qua giá trị của 3 đồng coin.
//                                 // Cái gì khiến mình confuse khi thực hiện code này.
//                                 // Mỗi lần xét qua 1 đồng xu -> thực hiện tìm minimum
//             if(c[j]<=i) {
//                 dp[i] = min(dp[i], dp[i-c[j]]+1); // Lam sao biet giai thuat dung ?
//                                 // dp[i-c[j]] : dat y = i - c[j] -> y >= 0.
//                                 // state update.
//                                 // dp[i-c[j]]+1, ở trạng thái dp[0] nó tự initial cho 0.
//                                 // dp[i-c[j]] : cập nhật đến trạng thái trước đó.
//                                 // tại sao cách làm này giải quyết được trường hợp tìm min khi dp[i] khác max.
//                                 // xét mẫu 3 11 1 3 5 -> trường hợp dp[3] -> dp[i] khác max so dp[0] & dp[3] - 1 1 1
//                                 // Khi điều kiện  if(c[j]<=i) -> nó sẽ có khả năng dp[i] khác max.
//             }
//         }
//     }
//     if(dp[x]>=1e9)
//         cout << -1;
//     else
//         cout << dp[x];
//     // cout << dp[0] << endl;
//     return 0;
    
// }

// att2:

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

//     for(int i=1; i<=x; ++i) {
//         dp[i] = 1e9;
//         for(int j=0; j<n; ++j) {
//             if(c[j]<=i) {
//                 dp[i] = min(dp[i], dp[i-c[j]]+1);
//             }
//         }
//     }
//     if(dp[x] >= 1e9) cout << -1;
//     else cout << dp[x];
//     return 0;
// }

// att2:

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 100, mxX = 1e6, M = 1e9 + 7;

int c[mxN];
ll dp[mxX + 1];
int n, x;

int main() {
    cin >> n >> x;
    for(int i=0; i<n; ++i) {
        cin >> c[i];
    }

    for(int i=1; i<=x; ++i) {
        dp[i] = 1e9;
        for(int j=0; j<n; ++j) {
            if(c[j]<=i) {
                dp[i] = min(dp[i], dp[i-c[j]] + 1);
            }
        }
    }

    if(dp[x]>=1e9) cout << -1;
    else cout << dp[x];

    return 0;
}

