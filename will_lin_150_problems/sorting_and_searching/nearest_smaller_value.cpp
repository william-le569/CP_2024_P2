// #include <bits/stdc++.h>
// using namespace std;

// #define ar array

// const int mxN = 2e5;

// const int max_int = 1e9;

// ar<int, 2> a[mxN];

// int main() {
//     int n;
//     cin >> n;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i][0], a[i][1] = i;
//     }
//     ar<int, 2> ans[n];
//     for(int i=0; i<n; ++i) {
//         ans[i][1] = i;
//     }
//     ans[0][0] = 0;
//     sort(a, a+n);
   
//     for(int i=1; i<n; ++i) {
//         int min = max_int;
//         for(int j=0; j<i; ++j) {
//             if(a[i][0]-a[j][0]>=0&&a[i][1]-a[j][1]>0&&a[i][1]-a[j][1]<min) {
//                 min = a[i][1] - a[i][1];
//                 ans[i][0] = min;
//             }
//             else {
//                 ans[i][0] = 0;
//             }
//         }
//     }
//     for(int i=0; i<n; ++i) cout << ans[i][0] << " ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define ar array

// const int mxN = 2e5;

// const int max_int = 1e9;

// int n, a[mxN], nl[mxN];

// int main() {
//     int n;
//     cin >> n;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i];
//         nl[i] = i-1;
//         // cout << "i:" << i << " a[i]:" << a[i] << " nl[i]:" << nl[i] << endl;
//         while(~nl[i]&&a[nl[i]]>=a[i])
//             nl[i] = nl[nl[i]];
//         // cout << "a[nl[i]]:" << a[nl[i]] << " a[i]:" << a[i] << endl;
//         // cout << "nl[i]':" << nl[i] << endl;
//         cout << nl[i] + 1 << " ";
//     }
    
//     return 0;
// }

//-----------------------

#include <bits/stdc++.h>
using namespace std;

#define ar array

const int mxN = 2e5;

const int max_int = 1e9;

int n, a[mxN], nl[mxN];

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        nl[i] = i-1;
        while(~nl[i]&&a[nl[i]]>=a[i])
            nl[i] = nl[nl[i]];
        cout << nl[i] + 1 << " ";
    }
    
    return 0;
}