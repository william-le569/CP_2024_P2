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


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

ll modularBinaryExponentiation(int base, int exponent) {
    if(exponent == 0)
        return 1;
    ll result = modularBinaryExponentiation(base, exponent/2);
    if(exponent%2 == 1)
        return (((result * result) % mod) * base) % mod;
    else
        return (result * result) % mod;
}

int main() {
    int n;
    cin >> n;
    int totalSum = (n*(n+1))/2;
    if(totalSum%2) {
        cout << 0;
        return 0;
    }
    int setSum = totalSum/2;
    vector<ll> sumCount(setSum+1);
    sumCount[0] = 1;
    for(int value = 1; value <=n; ++value){ 
        for(int sum = setSum; sum >= value; sum--) { //assume n = 3 -> setSum = 6
            sumCount[sum] = (sumCount[sum] + sumCount[sum - value]) % mod;
        }
    }
    // cout << sumCount[setSum];
    cout << (sumCount[setSum] * modularBinaryExponentiation(2, mod - 2))%mod;
    return 0;
}

// int main() {
//     cout << modularBinaryExponentiation(2,3);
//     return 0;
// }