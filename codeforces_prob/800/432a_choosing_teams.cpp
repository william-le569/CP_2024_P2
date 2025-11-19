// Accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n, k;
    int res = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        if(5-a[i]>=k) res++;
    }
    cout << res/3;
    return 0;
}