// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> values(n);
//     int sum = 0;
//     for(int i=0; i<n; ++i) {
//         cin >> values[i];
//         sum += values[i];
//     }
//     vector<int> reachable(sum+1, 0); // number of way to create a specific sum.
//     reachable[0] = 1; // there is oneway to create sum of 0.
//     for(int i=0; i<n; ++i) {
//         for(int value=sum; value >= values[i]; value--) {
//             reachable[value] |= reachable[value-values[i]]; // condition: value >= values[i]
//         }
//     }
//     int count = 0;
//     for(int i=1; i<=sum; i++) {
//         if(reachable[i]) count++;
//     }
//     cout << count << endl;
//     for(int i=1; i<=sum; ++i) {
//         if(reachable[i])
//             cout << i << " ";
//     }
//     return 0;
// }

//-- attempt 1

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> values(n);
//     int sum = 0;
//     for(int i=0; i<n; ++i) {
//         cin >> values[i];
//         sum +=values[i];
//     }
//     // create a hash map also dp
//     vector<int> dp(sum+1, 0);
//     dp[0] = 1;
//     for(int i=0; i<n; ++i) {
//         for(int value = sum; value >= values[i]; --value) {
//             dp[value] |= dp[value - values[i]];
//         }
//     }
//     int count = 0;
//     for(int i=1; i<=sum; ++i) {
//         if(dp[i]) count ++;
//     }
//     cout << count << endl;
//     for(int i=1; i<=sum; ++i) {
//         if(dp[i]) cout<< i << " ";
//     }
//     return 0;
// }

// attempt 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> values(n);
    int sum = 0;
    for(int i=0; i<n; ++i) {
        cin >> values[i];
        sum += values[i];
    }
    vector<int> dp(sum+1, 0);
    dp[0] = 1;
    for(int i=0; i<n; ++i) {
        for(int value = sum; value >= values[i]; --value) {
            dp[value] |= dp[value - values[i]];
        }
    }
    int count = 0;
    for(int i=1; i<=sum; ++i) {
        if(dp[i]) {count++;}
    }
    cout << count;
    for(int i=1; i<=sum; ++i) {
        if(dp[i]) {cout << i;}
    }
    return 0;
}