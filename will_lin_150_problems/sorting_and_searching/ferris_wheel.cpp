#include<bits/stdc++.h>
using namespace std;

const int mxN=2e5;
int n, x, p[mxN];

int main() {
    cin >> n;
    cin >> x;
    int ans=0;
    for(int i=0; i<n; ++i)
        cin >>p[i];
    sort(p, p+n);
    for(int i=0, j=n-1; i<j;) {
        while(i<j&&p[i]+p[j]>x) --j;
        if(i>=j)
            break;
        ans++; // count number of valid pairs
        i++, j--;
    }
    cout << n-ans;
    return 0;
}

//---- same direction

// #include<bits/stdc++.h>
// using namespace std;

// const int mxN=2e5;
// int n, x, p[mxN];

// int main() {
//     cin >> n;
//     cin >> x;
//     int ans=0;
//     for(int i=0; i<n; ++i)
//         cin >>p[i];
//     sort(p, p+n);
//     for(int i=0, j=n-1; j<i&&j>=0;) {
//         while(j<i&&p[i]+p[j]>x) --j;
//         if(i>=j)
//             break;
//         ans++; // count number of valid pairs
//         i--, j--;
//     }
//     // for(int i=n-1; i>=1; --i) {
//     //     for(int j=i-1; j>=0&&j<i; --j) {
//     //         if(p[i]+p[j]<=x) {
//     //             ans++;
//     //         }
//     //     }
//     // }
//     cout << n-ans;
//     return 0;
// }