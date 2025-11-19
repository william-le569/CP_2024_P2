// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;                        // số phần tử trong tập gốc
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];

//     // Duyệt tất cả 2^n tập con
//     for (int b = 0; b < (1 << n); b++) {
//         vector<int> subset;
//         for (int i = 0; i < n; i++) {
//             if (b & (1 << i)) subset.push_back(a[i]); // bit thứ i trong b bật -> phần tử trong tập con.
//         }

//         // In ra tập con hiện tại (để minh họa)
//         cout << "{ ";
//         for (int x : subset) cout << x << " ";
//         cout << "}\n";
//     }

//     return 0;
// }


// atmp1:
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i=0; i<n; ++i) cin >> a[i];
//     for(int b=0; b<(1<<n); ++b) {
//         vector<int> subset;
//         for(int i=0; i<n; ++i) {
//             if(b&(1<<i)) subset.push_back(a[i]);
//         }
//         for(auto x: subset) cout << x << " ";
//         cout << "\n";
//     }
//     return 0;
// 

// at2
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int b=0; b<(1<<n); ++b) {
        vector<int> subset;
        for(int i=0; i<n; ++i) {
            if(b&(1<<i)) subset.push_back(a[i]);
        }
        // if(subset.empty()) cout << "empty";
        cout << "{ ";
        for(auto x:subset) {
            cout << x << " ";
        }
        cout << "}";
        cout << "\n";
    }
    return 0;
}
