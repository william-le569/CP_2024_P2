// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    ull n;
    cin >> n;
    ull sum = n * (n + 1) / 2;
    vector<ull> a(n-1);
    for(int i=0; i<n-1; ++i) {
        cin >> a[i];
        sum -= a[i];
    }
    cout << sum;
    return 0;
}