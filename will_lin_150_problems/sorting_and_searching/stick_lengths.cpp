#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    int p[n];
    for(int i=0; i<n; ++i) 
        cin >> p[i];
    sort(p, p+n);
    ll x=p[n/2];
    ll ans=0;
    for(int i=0; i<n; ++i)
        ans+=abs(p[i]-x);
    cout << ans;
    return 0;
}


// test
// 5
// 2 3 1 5 2


