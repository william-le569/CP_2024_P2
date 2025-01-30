// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ar array

// const int mxN = 2e5;
// int n, p[mxN];

// int main() {
//     cin >> n;
//     map<int, int> mp;
//     for(int i=0; i<n; ++i)
//         cin >> p[i];
//     int ans=0;
//     for(int i=0, j=0; i<n; ++i) {
//         while(j<n&&mp[p[j]]<1) {
//             mp[p[j]]++;
//             cout << "   " << i << " " <<j << " mp[p[" << j << "]=" << p[j] << "]=" << mp[p[j]] << endl;
//             ++j;    
//             cout << "   " << j << endl;
//         }
//         cout << "   " << j << endl;
//         ans=max(j-i, ans);
//         cout << "ans: " << ans <<endl;
//         mp[p[i]]--;
//         cout << "mp[p[" << i << "]=" << p[i] << "]=" << mp[p[i]] << endl;
//     }
//     cout << ans;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 2e5;
int n, p[mxN];

int main() {
    cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; ++i)
        cin >> p[i];
    int ans=0;
    for(int i=0, j=0; i<n; ++i) {
        while(j<n&&mp[p[j]]<1) {
            mp[p[j]]++;
            ++j;    
        }
        ans=max(j-i, ans);
        mp[p[i]]--;
    }
    cout << ans;

    return 0;
}

// 8
// 1 2 1 3 2 7 4 2

