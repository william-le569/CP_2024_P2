#include <bits/stdc++.h>
// #include <set>
using namespace std;

#define ar array

// #define pb(x) push_back(x)
#define pb push_back

int main() {
    int n;
    // problem statement : You may assume that all arrival and leaving times are distinc -> we can use set
    cin >> n;
    // int a[n], b[n];
    // for(int i=0; i<n; ++i) cin >> a[i] >> b[i];
    // set<ar<int, 2>> s;
    vector<ar<int, 2>> s;
    for(int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        s.pb({a, 1});
        s.pb({b, -1});
    }
    int ans = 0, c=0;
    sort(s.begin(), s.end());
    // cout << s.end() << endl;
    for(ar<int, 2> a : s) {
        c += a[1];
        ans=max(c, ans);
    }
    cout << ans;
    
    return 0;
}