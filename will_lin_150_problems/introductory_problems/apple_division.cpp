// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int n, p[20];
// int main() {
//     cin >> n;
//     ll s=0, ans=0;
//     for(int i=0; i<n; ++i)
//         cin >> p[i], s+=p[i];
//     for(int i=0; i<1<<n; ++i) {
//         ll cs=0;
//         for(int j=0; j<n; ++j)
//             if(i>>j&1) {
//                 cs+=p[j];
//             }
//         if(cs<=s/2)
//             ans=max(ans, cs);
//     }
//     cout << s-2*ans;
//     return 0;
// }


//// method 2
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void AppleDivision(int i, int n, ll sum1, ll sum2, vector<ll>&v, ll& mi) {
//     if(i==n) {
//         mi = min(mi, abs(sum1 - sum2));
//         return;
//     }
//     // left-recursive branch
//     AppleDivision(i+1, n, sum1 + v[i], sum2, v, mi);
//     // right-recursive branch
//     AppleDivision(i+1, n, sum1, sum2+v[i], v, mi);
// }

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     for(int i=0; i<n; ++i) cin >> v[i];
//     ll mi = LONG_LONG_MAX;

//     AppleDivision(0, n, 0, 0, v, mi);

//     cout << mi << endl;
// }

// int main() {
//     solve();
// }

// ----------- self-training-session-------
// Date: April - 20 - 2025
// Attempt: 1
// method 2


#include <bits/stdc++.h>
using namespace std;
#define ll long long

void AppleDivision(int n, int i, ll sum1, ll sum2, vector<ll>& v, ll& minimum) {
    if(i==n) {
        minimum = min(minimum, abs(sum1 - sum2));
        return;
    }
    // calculate the left-size of the tree - left recursive branch of binary recursive tree
    AppleDivision(n, i+1, sum1 + v[i], sum2, v, minimum);
    // calculate the right-size of the tree - left recursive branch of binary recursive tree
    AppleDivision(n, i+1, sum1, sum2 + v[i], v, minimum);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    ll result = LONG_LONG_MAX;
    // ll result = 999999;
    AppleDivision(n, 0, 0, 0, arr, result);

    cout << result;
}

int main() {
    solve();
    return 0;
}
