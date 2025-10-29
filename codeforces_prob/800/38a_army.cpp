// accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    int d[n];
    for(int i=0; i<n-1; ++i) cin >> d[i];
    int a, b;
    cin >> a >> b; // 1 based
    int res = 0;
    for(int i = a-1; i<b-1; ++i) {
        res += d[i];
    }
    cout << res;
    return 0;
}