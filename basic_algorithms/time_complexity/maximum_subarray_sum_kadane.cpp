#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }

    // Kadane algorithm
    int sum = 0, best = 0;
    for(int k=0; k<n; k++) {
        sum = max(sum + a[k], a[k]);
        best = max(sum, best);
    }

    cout << best;

    return 0;
}