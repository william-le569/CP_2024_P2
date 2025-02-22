// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main() {
//     int n;
//     cin >> n;
//     vector<ll> values(n);
//     vector<vector<ll>> maximum_difference_for_interval(n, vector<ll>(n));
//     ll total_sum_of_values = 0;
//     for(int i=0; i<n; ++i) {
//         cin >> values[i];
//         maximum_difference_for_interval[i][i] = values[i];
//         total_sum_of_values += values[i];
//     }
//     for(int left = n-1; left>=0; --left) {
//         for(int right=left+1; right<n; ++right) {
//             ll choosing_the_first_element_score = values[left] - maximum_difference_for_interval[left+1][right];
//             ll choosing_the_last_element_score = values[right] - maximum_difference_for_interval[left][right-1];
//             maximum_difference_for_interval[left][right] = max(choosing_the_first_element_score, choosing_the_last_element_score);

//         }
//     }

//     cout << (total_sum_of_values + maximum_difference_for_interval[0][n-1]) / 2;
//     return 0;
// }

// attempt 1:

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     int n;
//     cin >> n;
//     vector<ll> values(n);
//     vector<vector<ll>> dp(n, vector<ll>(n));
//     int sum = 0;
//     for(int i=0; i<n; ++i) {
//         cin >> values[i];
//         sum += values[i];
//         dp[i][i] = values[i];
//     }

//     for(int left = n-1; left >= 0; --left) {
//         for(int right = left + 1; right<n; ++right) {
//             ll choose_left_element = values[left] - dp[left+1][right];
//             ll choose_right_element = values[right] - dp[left][right-1];
//             dp[left][right] = max(choose_left_element, choose_right_element);
//         }
//     }
//     cout << (sum + dp[0][n-1])/2;
//     return 0;
// }

// solution of wililam lin

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 5e3;
int n, x[mxN];
ar<ll, 2> dp[mxN][mxN];

int main() {
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> x[i];
    }
    for(int i=n-1; ~i;--i) {
        for(int j=i+1; j<n; ++j) {
            ar<ll, 2> tr;
            if(i==j) {
                tr = {x[i], 0};
            } else {
                if(dp[i+1][j][1] + x[i] > dp[i][j-1][1] + x[j])
                    tr = {dp[i+1][j][1]+x[i], dp[i+1][j][0]};
                else 
                    tr = {dp[i][j-1][1]+x[j], dp[i][j-1][0]};
            }
            dp[i][j] = tr;
        }
    }
    cout << dp[0][n-1][0];
    return 0;
}