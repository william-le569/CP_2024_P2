#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    int tmp;
    while(x % y) {
        tmp = y;
        y = x % y;
        x = tmp;
    }
    return y;
}

int main() {
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; ++i) cin >> A[i];

    sort(A, A + n);

    int ans;

    ans = A[0];

    for(int i = 1; i < n; ++i) {
        ans = gcd(ans, A[i]);
    }
    // ans must be around given numbers
    int k;
    k = lower_bound(&A[0], &A[n], ans) - &A[0];
    if(ans != A[k]) cout << "-1" << endl;
    else cout << ans << endl;

    return 0;
}