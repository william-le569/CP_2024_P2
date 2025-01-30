// #include <bits/stdc++.h>
// using namespace std;

// const int mxN = 2e5;

// // int a[mxn];

// int main() {
//     int n;
//     cin >> n;
//     int x;
//     cin >> x;
//     int a[n];
//     for(int i=0; i<n; ++i) {
//         cin >> a[i];
//     }
//     int c = 0;
//     for(int i=0; i<n-1; ++i) {
//         for(int j=i+1; j<n && j!=i; ++j) {
//             if(a[i]+a[j]-x==0) {
//                 cout << &a[i]-&a[0]+1 << " " << &a[j]-&a[0]+1;
//                 c++;
//             }
//         }
//     }
//     if(c<=0) cout << "IMPOSSIBLE\n";
//     return 0;
// }

//------------------will solution

// 4 8
// 2 7 5 1

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 2e5;
// int n, x;
// // your task is to find two values (at distinct positions
// // If there are several solutions, you may print any of them.
// int main() {
//     cin >> n >> x;
//     map<int, int> mp;
//     for(int i=0; i<n; ++i) {
//         int a;
//         cin >> a;
//         if(mp.find(x-a)!=mp.end()) { // if not found return mp.end()
//                                     // If the key is found,
//                                     //it returns an iterator to the position where the key is present in the map.
//             cout << mp[x-a] +1 << " " << i + 1;
//             return 0;
//         }
//         mp[a] = i;
//     }
//     cout << "IMPOSSIBLE";
// }

//--------------------

#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long

const int mxN = 2e5;

ar<int, 2> a[mxN];

int main() {
    int n;
    cin >> n;
    ll x;
    cin >> x;
    for(int i=0; i<n; ++i) {
        cin >> a[i][0], a[i][1] = i;
    }
    sort(a, a+n);
   
    for(int i=0, j=n-1; i<j; ++i) {
        while(i<j&&a[i][0]+a[j][0]>x)
            --j;
        if(i<j&&a[i][0]+a[j][0]==x) {
            cout << a[i][1]+1 << " " << a[j][1]+1;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}