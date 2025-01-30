#include <bits/stdc++.h>
using namespace std;

int const mxN = 2e5;
int t[mxN];
int n;

int main() {
    cin >> n;
    int s = 0;
    for(int i=0; i<n; ++i) {
        cin >> t[i], s += t[i];
    }    
    sort(t, t+n);
    // int min;
    cout << max(s, 2*t[n-1]);

    return 0;
}