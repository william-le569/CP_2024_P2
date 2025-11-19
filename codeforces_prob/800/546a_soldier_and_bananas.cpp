// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int k, n, w;
    cin >> k >> n >> w;
    int res;
    res = k * (w * (w + 1)/2) - n;
    (res <= 0)?cout << 0: cout << res;
    return 0;
}