#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; ++i) cin >> h[i];

    int res = 2*n - 1;
    res += h[0];
    
    for(int i = 0; i < n - 1; ++i) {
        if(h[i] > h[i + 1]) res += h[i] - h[i + 1];
        else res += h[i + 1] - h[i];
    }

    cout << res << endl;

    return 0;
}