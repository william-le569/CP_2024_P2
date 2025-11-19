// Time complexity O(n^2)
// Accepted

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // your code here
//     int n, m;
//     cin >> n >> m;
//     vector<int> x(n);
//     vector<int> y(m);
//     for(int i=0; i<n; ++i) cin >> x[i];
//     for(int i=0; i<m; ++i) cin >> y[i];
//     for(int i=0; i<n; ++i) {
//         for(int j=0; j<m; ++j) {
//             if(x[i] == y[j]) cout << x[i] << " ";
//         }
//     }
//     return 0;
// }

// Time complexity O(n)
// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n, m;
    cin >> n >> m;
    vector<int> x(n);
    vector<int> y(m);
    vector<int> hash(10, 0);
    for(int i=0; i<n; ++i) cin >> x[i];
    for(int i=0; i<m; ++i) {
        cin >> y[i];
        hash[y[i]] = 1; // due to 0-based already.
    }
    for(int i=0; i<n; ++i) {
        if(hash[x[i]]) cout << x[i] << " ";
    }
    return 0;
}
