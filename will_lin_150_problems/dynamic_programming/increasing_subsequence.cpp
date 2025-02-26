// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> subsequence;
//     for(int i=0; i<n; ++i) {
//         int value;
//         cin >> value;
//         int idx = lower_bound(subsequence.begin(), subsequence.end(), value) - subsequence.begin();
//         if(idx == subsequence.size()) {
//             subsequence.push_back(value);
//         } else {
//             subsequence[idx] = value;
//         }
//     }

//     cout << subsequence.size();
//     // cout << (subsequence.begin() - subsequence.end());
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> dp; // random size LIS vector
//     for(int i=0; i<n; ++i) {
//         int value; // 1.. 1e9
//         cin >> value;
//         int idx = lower_bound(dp.begin(), dp.end(), value) - dp.begin(); 
//         if(idx == dp.size()) {
//             dp.push_back(value);
//         } else {
//             dp[idx] = value;
//         }
//     }
//     // for(int i=0; i<dp.size(); ++i) {
//     //     cout << dp[i] << " ";
//     // }
//     // cout << "\n";
//     cout << dp.size();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp;
    vector<int> parent;
    for(int i=0; i<n; ++i) {
        int value;
        cin >> value;
        int idx = lower_bound(dp.begin(), dp.end(), value) - dp.begin();
        if(idx == dp.size()) {
            dp.push_back(value);
            parent.push_back(value);
        }
        else {
            dp[idx] = value;
            // parent.push_back(value);
        }
    }
    cout << dp.size();
    for(int i=0; i<parent.size(); ++i) {
        cout << parent[i] << " ";
    }
    return 0;
}