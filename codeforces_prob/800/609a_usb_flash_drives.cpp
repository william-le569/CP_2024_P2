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
    int a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a, a+n);
    int res = INT_MAX;
    int sum = 0;
    int count = 0;
    for(int i=n-1; i>=0; i--) {
        sum += a[i];
        count++;
        if(sum >= m) {
            res = min(res, count);
        }
    }

    cout << res;
    return 0;
}