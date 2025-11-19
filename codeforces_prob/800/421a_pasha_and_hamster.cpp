// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arthur(a,0), alex(b,0), res(n, 0);
    // vector
    for(int i=0; i<a; ++i) {
        cin >> arthur[i];
        res[arthur[i]-1] = 1;
    }
    for(int i=0; i<b; ++i) {
        cin >> alex[i];
        if(res[alex[i]-1] != 1) res[alex[i]-1] = 2;
    }
    for(int i=0; i<n; ++i) cout << res[i] << " ";
    return 0;
}