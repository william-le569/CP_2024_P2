// accepted
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    int n;
    cin >> n;
    int a[n];
    int res1, res2;
    int min = 1001;
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<n; ++i) {
       if(abs(a[i] - a[(i+1)%n]) < min) {
        min = abs(a[i] - a[(i+1)%n]);
        res1 = i + 1;
        res2 = (i+1)%n + 1;
       }
    }

    cout << res1 << " " << res2;
    return 0;
}