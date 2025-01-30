#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max_v = INT_MIN;
    int ans;
    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        max_v = max(a, max_v);
    }
    cout << max_v;
    return 0;
}