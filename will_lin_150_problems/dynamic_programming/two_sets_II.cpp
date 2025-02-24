// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     int n;
//     cin >> n;
//     vector<int> values(n);
//     int sum = 0;
//     map<ll, int> mp;
//     mp[0]++;
//     ll count = 0;
//     for(int i=1; i<=n; ++i) {
//         sum += i;
//     }
//     int sum2 = sum / 2;
//     // int sum2 = sum / 2;
//     if(n%2) {
//         map<ll, int> mp;
//         mp[0]++;
//         ll count = 0;
//         int sum_tmp = 0;
//         for(int i=1; i<=n; ++i) {
//             // cin >> a[i];
//             // sum += a[i]; // prefix sum
//             sum_tmp += i;
//             count = count + mp[sum_tmp-sum2];
//             mp[i]++;
//         }
//     }

//     // } else cout << 0 << endl;
//     cout << count;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// const int mod = 1e9 + 7;

// ll modularBinaryExponentiation(int base, int exponent) {
//     if(exponent == 0)
//         return 1;
//     ll result = modularBinaryExponentiation(base, exponent/2);
//     if(exponent%2 == 1)
//         return (((result * result) % mod) * base) % mod;
//     else
//         return (result * result) % mod;
// }

// int main() {
//     int n;
//     cin >> n;
//     int totalSum = (n*(n+1))/2;
//     if(totalSum%2) {
//         cout << 0;
//         return 0;
//     }
//     int setSum = totalSum/2;
//     vector<ll> sumCount(setSum+1);
//     sumCount[0] = 1;
//     for(int value = 1; value <=n; ++value){ 
//         for(int sum = setSum; sum >= value; sum--) { //assume n = 3 -> setSum = 6
//             sumCount[sum] = (sumCount[sum] + sumCount[sum - value]) % mod;
//         }
//     }
//     // cout << sumCount[setSum];
//     cout << (sumCount[setSum] * modularBinaryExponentiation(2, mod - 2))%mod;
//     return 0;
// }

// int main() {
//     cout << modularBinaryExponentiation(2,3);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     // read the input
//     int n;
//     cin >> n;
//     int total = (n * (n + 1)) / 2; // sum of consecutive numbers e.g. 1, 2, 3,...
//     // check for edge case: total can't be divided into two sets
//     if(total % 2 == 1) {
//         cout << 0;
//         return 0;
//     }
//     ll MOD = 1e9 + 7;

//     // build the dp table
//     int half = total / 2;
//     vector<ll> dp(half + 1);
//     dp[0] = 1;
//     for(int coin = 1; coin <= n; ++coin) {
//         for(int i = half; i >= coin; i--) {
//             dp[i] = (dp[i] + dp[i - coin]) % MOD;
//         }
//     }

//     ll modInverseOfTwo = 5000000004;
//     cout << (dp[half] * modInverseOfTwo) % MOD ;
//     return 0;
// }

// attempt 2

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// const int MOD = 1e9 + 7;

// ll binaryExponentation(int base, int exp) {
//     if(exp == 0) return 1;
//     ll result = binaryExponentation(base, exp / 2);
//     if(exp % 2 == 1)
//         return (((result * result) % MOD) * base) % MOD;
//     else return (result * result) % MOD;
// }

// int main() {
//     // cout << binaryExponentation(2, 3);
//     int n;
//     cin >> n;
//     ll sum = n*(n+1) / 2;
//     if(sum % 2) {
//         cout << 0;
//         return 0;
//     }
//     ll sumSet = sum / 2;
//     vector<ll> dp(sumSet + 1);
//     dp[0] = 1;
//     for(int coin = 1; coin <= n; ++coin) {
//         for(int i = sumSet; i >= coin; --i) {
//             dp[i] = (dp[i] + dp[i - coin]) % MOD;
//         }
//     }

//     cout << (dp[sumSet] * binaryExponentation(2, MOD - 2)) % MOD;
//     return 0;
// }

// William Lin

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 5e2, M = 1e9 + 7;
int n;
ll dp[mxN*(mxN)/2 + 1];

int main() {
    cin >> n;
    int s = n * (n+1) / 2;
    if(s & 1) {
        cout << 0;
        return 0;
    }
    s /= 2;
    dp[0] = 1;
    for(int i=1; i<=n; ++i) {
        for(int j=i*(i+1)/2; j>=i; --j)
            dp[j] = (dp[j] + dp[j-i]) % M;
    }
    cout << (dp[s] * ((M + 1) / 2) % M);
}