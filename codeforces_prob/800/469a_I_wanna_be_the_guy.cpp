#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    // bool c[n] = {false};
    vector<bool> c(n, false); 

    int p, q;
 
    cin >> p;
    int a[p];
    for(int i=0; i<p; ++i) {
        cin >> a[i];
        c[a[i]-1] = true;
    }

    cin >> q;
    int b[q];
    for(int i=0; i<q; ++i) {
        cin >> b[i];
        c[b[i]-1] = true;
    }

    bool res = c[0];

    for(int i=1; i<n; ++i) {
        res &= c[i];
    }

    if(res) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";

    return 0;
}