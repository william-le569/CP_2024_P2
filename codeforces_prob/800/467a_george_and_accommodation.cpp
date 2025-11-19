// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    int res = 0;
    int p, q;
    for(int i=0; i<n; ++i) {
        cin >> p >> q;
        if(q-p>=2) res++;
    }
    cout << res;

    return 0;
}