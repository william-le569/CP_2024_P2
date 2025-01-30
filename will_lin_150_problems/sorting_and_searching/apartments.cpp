// #include <bits/stdc++.h>
// using namespace std;

// const int mxN=2e5;
// int n, m, k, a[mxN], b[mxN];

// int main() {
//     cin >> n >> m >> k;
//     for(int i=0; i<n; ++i)
//         cin >> a[i];
//     for(int i=0; i<m; ++i)
//         cin >> b[i];
//     sort(a, a+n);
//     sort(b, b+m);
//     int ans=0;
//     // 45 60 60 80 n = 4  , k=5  -> a
//     // 30 60 75 m = 3 -> b
//     for(int i=0, j=0; i<n; ++i) {
//         while(j<m&&b[j]<a[i]-k) // b[j]<a[i]-k : apartment is too small -> move to next apartment
//             ++j;
//         if(j<m&&b[j]<=a[i]+k)  // b[j]<=a[i]+k : apartment is suitable
//             ++ans, ++j;
//         cout << i << " " << j << endl;
//     }
//     cout << ans;
//     return 0;
// }

//------------ More instituitive

// #include <bits/stdc++.h>
// using namespace std;

// const int mxN = 2e5;
// int n, m, k, a[mxN], b[mxN];

// int main() {
//     cin >> n >> m >> k;
//     for(int i=0; i<n; ++i)
//         cin >> a[i];
//     for(int i=0; i<m; ++i)
//         cin >> b[i];
//     sort(a, a+n);
//     sort(b, b+m);
//     int i=0, j=0, ans=0;
//     while(i<n && j<m) {
//         // if(abs(a[i]-b[j]) <= k) {  // b > a-k && b < a+k -> a - b <= k , b-a <= k
//                                     // abs(a-b) <= k -> -k <= a-b <=k
//         if(a[i]-k<=b[j]&&a[i]+k>=b[j]) {
//             ++i;
//             ++j;
//             ++ans;
//         } else {
//             if(a[i] - b[j] >k) {
//                 ++j;
//             }
//             else ++i;
//         }
//     }
//     cout << ans;
//     return 0;
// }

//----------- test

#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5;
int n, m, k, a[mxN], b[mxN];

int main() {
    cin >> n >> m >> k;
    for(int i=0; i<n; ++i)
        cin >> a[i];
    for(int i=0; i<m; ++i)
        cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    int i=0, ans=0;
    int j=0;
    for(int i=0; i<n; ++i) {
        int j=0;
        while(j<m) {
            if(b[j]>=a[i]-k&&b[j]<=a[i]+k) {
                ans++;
                j++;
            } else {
                j++;
            }
        }
    }
    cout << ans;
    return 0;
}