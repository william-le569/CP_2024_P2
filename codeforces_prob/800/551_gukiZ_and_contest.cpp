// Accepted
// Method 1 n^2 log n
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int dp[2001]; // result, number of members that are strictly higher.
// int freq[2001]; // count, number of occurences of current element.

// bool isExisted(int key, set<int>a) { //logn
//     return a.count(key) > 0;
    
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     int max = 0;
//     cin >> n;
//     int a[n];
//     set<int> existed;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i];
//         freq[a[i]]++;
//         existed.insert(a[i]);
//         if(a[i]>max) max = a[i];
//     }
//     dp[max] = 1;
//     for(int i=max-1; i>=1; --i) {
//         if(isExisted(i, existed)) {
//             for(int j=max; j>i; --j) {
//                 dp[i] += freq[j];
//             }
//         }
//     }
//     for(int i=0; i<n; ++i) {
//         if(a[i] == max) {
//             cout << 1 << " ";
//         } else {
//             cout << dp[a[i]] + 1 << " ";
//         }
//     }
//     return 0;
// }


//method 2 -> use suffix sum to optimize
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     int maxVal = 0;

//     vector<int> freq(2001, 0);  // số lần xuất hiện của mỗi số
//     set<int> existed;           // các số xuất hiện

//     for(int i = 0; i < n; ++i) {
//         cin >> a[i];
//         freq[a[i]]++;
//         existed.insert(a[i]);
//         maxVal = max(maxVal, a[i]);
//     }

//     vector<int> dp(2001, 0);

//     // Tạo suffix sum
//     vector<int> suffixSum(2002, 0); // suffixSum[i] = tổng freq[j] với j >= i
//     for(int i = maxVal; i >= 1; --i) {
//         suffixSum[i] = freq[i] + suffixSum[i+1];
//     }

//     // Tính dp[i] = số phần tử strictly lớn hơn i
//     for(int i = 1; i <= maxVal; ++i) {
//         if(existed.count(i)) {   // lookup O(log n)
//             dp[i] = suffixSum[i+1];  // tổng các số > i
//         }
//     }

//     // Xuất kết quả
//     for(int i = 0; i < n; ++i) {
//         if(a[i] == maxVal) {
//             cout << 1 << " ";
//         } else {
//             cout << dp[a[i]] + 1 << " ";
//         }
//     }
//     cout << "\n";

//     return 0;
// }

// method 3
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x: a) cin >> x;
    for (auto &x: a) {
        int ans = 1;
        for (auto &y: a)
            if (x < y)ans++;
        cout << ans << ' ';
    }
    return 0;
}