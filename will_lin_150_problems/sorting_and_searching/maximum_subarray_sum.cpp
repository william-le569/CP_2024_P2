#include <bits/stdc++.h>
using namespace std;
// 8
// -1 3 -2 5 3 -5 2 2
#define ll long long

int main() {
    int n;
    cin >> n;
    ll max_global=-1e18, max_current=-1e18;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        max_current=max(0ll+a, max_current+a);
        max_global=max(max_global, max_current);
    }
    cout << max_global;
    return 0;
}