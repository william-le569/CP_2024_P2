// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// const int mxN = 1e3;
// int n;
// ll x, a[mxN];

// int main() {
//     cin >> n >> x;
//     ll s = 0;
//     map<ll, int> mp;
//     mp[0]++;
//     ll ans=0;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i];
//         s+=a[i];
//         ans+=mp[s-x];
//         mp[s]++;
//         cout << "i:" << i << endl;
//         cout << "a[i]:" << a[i] << endl;
//         cout << "s:" << s << endl;
//         cout << "ans:" << ans << endl;
//         for(auto&p : mp) cout << "Key:" << p.first << ", Value:" << p.second << endl;
//     }
//     cout << ans;
//     return 0;
// }

// 5 7
// 2 4 1 2 7

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// const int mxN = 2e5;
// int n;
// ll x, a[mxN];

// int main() {
//     cin >> n >> x;
//     ll s = 0;
//     map<ll, int> mp;
//     mp[0]++;
//     ll ans=0;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i];
//         s+=a[i];
//         ans+=mp[s-x];
//         mp[s]++;
//     }
//     cout << ans;
//     return 0;
// }

// 5 7
// 2 4 1 2 7

// 5 8
// 2 4 1 2 5 7

//-----------------

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// const int mxN = 2e5;
// int n;
// ll x, a[mxN];

// int main() {
//     cin >> n >> x;
//     ll sum = 0;
//     map<ll, int> mp;
//     mp[0]++;
//     ll count = 0;
//     for(int i=0; i<n; ++i) {
//         cin >> a[i];
//         sum += a[i]; // prefix sum
//         count = count + mp[sum-x];
//         mp[a[i]]++;
//     }

//     cout << count << endl;
    
//     return 0;
// }

// solve sums II wrong at :
// 6 7
// 5 2 -2 2 -2 2

//-------------------
// gpt solution
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN = 2e5;
int arr[mxN];

int main() {


    int n;
    cin >> n;

    ll target;
    cin >> target;

    // int arr[n];
    for(int i=0; i<n; ++i) cin >> arr[i];

    // unordered_map<ll, int> prefix_count;
    map<ll, int> prefix_count;
    prefix_count[0] = 1;
    ll prefix_sum = 0;
    ll result = 0;

    for (int i = 0; i < n; ++i) {
        prefix_sum += arr[i];
        
        if (prefix_count.find(prefix_sum - target) != prefix_count.end()) {
            result += prefix_count[prefix_sum - target];
        }

        prefix_count[prefix_sum]++;
    }

    cout << result << endl;
    return 0;
}

// solve correct at sample
// 6 7
// 5 2 -2 2 -2 2